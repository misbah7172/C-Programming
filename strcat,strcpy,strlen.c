#include<stdio.h>
int main()
{
    char str1[100] = "Hello";
    char str2[100] = "Bonjour";
    int i, k;
    strcat(str1, "Maria");
    strcpy(str2, "Federick");
    i=strlen(str1);
    for(k=0; str2[k] !='\0'; k++)
        str1[i+k] = str2[k];
    puts(str2);
    printf("\n");
    puts(str1);
    printf("\n");
    strrev(str1);
    puts(str1);

}
