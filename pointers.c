#include <stdio.h>
int main()
{
    int a = 45;
    int *b = &a;
    int *c = NULL;
    printf("%p\n", &b);
    printf("%p\n", &a);
    printf("%p\n", b);
    printf("%p\n", c);
    printf("%p\n", &c);
    printf("%d\n", a);
    printf("%d\n", *b);
    return 0;
}