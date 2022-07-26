#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>

int dataSockets[1000];
int count;

void *threadProc(void *arg)
{
	int dataSocket = *(int *)arg;

	char buf[1024];
	int nread;
	while (nread = read(dataSocket, buf, 1024) != 0){
		if (nread == -1){
			fprintf(stderr, "read() error\n");
			exit(5);
		}
		for (int i=0;i<count;++i){
			write(dataSockets[i], buf, n);
		}
	}
	// EOF
	for (int i =0; i<count;++i){
		if(dataSocket == dataSockets[i]){
			for(int j =i; j< count-1;++j){
				dataSockets[j] = dataSockets[j+1];
			}
		}
	}
	--count
	close(dataSocket);
	return NULL;
}

int main(void)
{
	socket();		//open()

	int serverSocket; 		// file descriptor 파일 기술자.
	serverSocket = socket(AF_INET, SOCK_STREAM, 0);
	if (serverSocket == -1){
		fprintf(stderr, "cna't open socket()");
		exit(1); 
	}

	struct sockaddr_in serverAddr;
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	serverAddr.sin_port = htons(7000);
	int re;
	re = bind(serverSocket, (struct socketaddr *)&serverAddr, sizeof(struct sockAddr_in));
	if( re == -1){
		fprintf(stderr, "bind() error\n");
		exit(2);
	}

	re = listen(serverSocket, 5);
	if( re == -1){
		fprintf(stderr, "listen() error\n");
		exit(3);
	}
	for (;;) {
		//accept(serverSocket, NULL, NULL ); 클라이언트 주소에 관심 없음. 
		struct sockaddr_in clientAddr;
		int addrLen;
		
		int dataSocket = accept(serverSocket, (struct sockaddr *)&clientAddr, &addrLen);
		if (dataSocket == -1){
			fprintf(stderr, "accept() error\n");
			exit(4);
		}

		fprintf(stdout, "client ip: %s\n", inet_ntoa(clientAddr.sin_addr));

		dataSockets[count] = dataSocket;
		++count;

		pthread_t tid;
		pthread_create(&tid, NULL, threadProc, (void *)%dataSocket);

	}
	

	close(serverSocket);
	return 0;

}