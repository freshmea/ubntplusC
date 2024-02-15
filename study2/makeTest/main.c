#include "main.h"

int test(void)
{
    printf("test\n");
    return 0;
}

int main(void)
{
    abcInt = 123;
    printf("Hello, World!\n");
    test();
    foo();
    bar();
    printf("abcInt = %d\n", abcInt);
    return 0;
}