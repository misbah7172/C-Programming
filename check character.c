#include<stdio.h>
int main()
{
    char ch;
    printf("C program to check whether a character is alphabet, digit or special character.\n\n");
    printf("Enter any character :");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("%c is alphabet",ch);
    else if(ch>='0' && ch<='9')
        printf("%c is digit",ch);
    else
    printf("%c is special character",ch);
    return 0;
}