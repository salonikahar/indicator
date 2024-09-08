#include<stdio.h>
#include<string.h>
int main(){

    char str[100];
    int length;

    printf("Enter the string :");
    scanf("%s",&str);

    char *ptr= str;
    
    length=strlen(str);
    int *lth=&length;


    printf("length of string %d",*lth);

    return 0;
}