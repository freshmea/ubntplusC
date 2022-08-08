

static int stack[100];
static int tos;

void push(int a)
{
	stack[tos++] = a;
}

int pop(void)
{
	return stack[--tos];
}
