static int queue[100];
static int front;
static int rear;

void push(int data)
{
	queue[rear++] = data;
}

int pop(void)
{
	return queue[front++];
}