#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int lastFour = num % 10000;

    if (lastFour % 16 == 0)
        printf("%d is divisible by 16", num);
    else
        printf("%d is not divisible by 16", num);

    return 0;
}
