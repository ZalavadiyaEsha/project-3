#include <stdio.h>
int main() 
{
    char ch = 'a';
    do 
    {
        printf("%c\n", ch);
        ch = ch + 4;
    } while (ch <= 'y');

    return 0;
}