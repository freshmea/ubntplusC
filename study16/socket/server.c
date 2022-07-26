#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>


??? for_client_read_write( dataSocket)
{
	for (;;){
	//read() / write()
		if(end??) break;
	}
	close(dataSocket);
}

int main(void)
{
	socket();		//open()

	int fd 		// file descriptor 파일 기술자.
	fd = socket(AF_INET, SOCK_STREAM, 0);
	if (fd == -1){
		fprintf(stderr, "cna't open socket()");
		exit(1); 
	}
	bind();
	listen();
	for(;;){
		accept();
		read()/write();
		// create thread for read() / write();
	}
	
	
	
	close();
	return 0;

}