#include <stdio.h>

int main(void) {
    int i;
    int grade[5];
    int sum = 0;
    double average;
    int *ptr = grade;

    for (i = 0; i < 5; i++) {
        printf("grade[%i] = ", i);
        scanf("%d", &grade[i]);
    }

    printf("\nGrades:\n");

    for (i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i));
        sum += *(ptr + i);
    }

    average = sum / 5.0;

    printf("Average = %.2f\n", average);

    return 0;
}