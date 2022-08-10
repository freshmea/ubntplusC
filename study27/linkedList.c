#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}Node;

void insertNode(int data, Node *ptr)
{
	Node *tmp = malloc(sizeof(Node));
	tmp->data = 2;
	tmp->next = ptr->next;
	ptr->next = tmp;
}
void deleteNode( Node *ptr)
{
	Node *tmp = malloc(sizeof(Node));
	Node *tmp2 = malloc(sizeof(Node));
	tmp = ptr->next;
	for(int i=0;i<1;i++){
		tmp = tmp->next;
	}
	tmp2 = ptr->next;
	for(int i=0;i<2;i++){
		tmp2 = tmp2->next;
	}
	tmp2 = tmp->next;
	free(tmp);
	free(tmp2);
}

int main(void)
{
	Node *ptr;
	ptr = malloc(sizeof(Node));
	ptr->data = 1;// first node data
	ptr->next = malloc(sizeof(Node));
	ptr->next->data = 3;// second node data
	ptr->next->next = malloc(sizeof(Node));
	ptr->next->next->data = 4;// third node data

	//삽입 코드
	insertNode(3,ptr);

	//삭제 코드 
	deleteNode(ptr);

	// p = ptr;
	// for(i=0;i<10;i++){

	// 링크드 리스트 출력.
	Node *p;
	p = ptr;
	while (p ){
		printf("%d\n", p->data);
		p = p->next;
	}

	//동적 메모리 삭제. 
	p = ptr;
	while(p){
		Node *tmp = p;
		p = p->next;
		free(tmp);
	}
	return 0;
}