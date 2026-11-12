#include <stdio.h>

int main(void) {
    char c[2];
    int i[2];
    double d[2];

    char *pc = c;
    int *pi = i;
    double *pd = d;

    printf("증가 전:\n");
    printf("pc = %p\n", (void*)pc);
    printf("pi = %p\n", (void*)pi);
    printf("pd = %p\n", (void*)pd);

    pc++;
    pi++;
    pd++;

    printf("\n증가 후:\n");
    printf("pc = %p\n", (void*)pc);
    printf("pi = %p\n", (void*)pi);
    printf("pd = %p\n", (void*)pd);

    return 0;
}