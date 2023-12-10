#include <stdio.h>

int main()
{
    int x = 100;
    int *ptr = &x;
    printf("address of ptr - %p\n", &ptr);
    printf("value of ptr - %d", *ptr);
    return 0;
}