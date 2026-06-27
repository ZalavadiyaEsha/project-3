#include <stdio.h>

int main() {
    int num, first, last, temp;

    printf("Enter any number: ");
    scanf("%d", &num);
    last = num % 10;
    temp = num;
    while (temp >= 10) 
    {
        temp /= 10;
    }
    first = temp;
    printf("The sum of the first and the last digit = %d\n", first + last);
    return 0;
}