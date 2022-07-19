
static int seed = 1 ;				// static 같은 파일안에 서만 접근 할 수 있다. 

void my_srand(int s)			// function definition
{
	seed = s;
}

int my_rand(void)
{
	seed = seed *11035152245+12345;
	return ((unsigned)(seed/65536))%32768;
}
