#include <stdio.h>


static const char * foo0 = "BarrrrR0";
static const char * const foo1 = "FoooOoOOOOoOoo1";
const char * foo2 = "Bazzzzzzzz!2";
const char * const foo3 = "Bazzzzzzzz!3";
char *foo100 = "FOooO100";
char fooX = 'X';

static void test2(void)
{
    printf("Testing1!\n");
    printf("Testing2!\n");
}

int main(void)
{
    printf("Testing1!\n");
    printf("Testing2!\n");
    test2();

    return 0; 
}
