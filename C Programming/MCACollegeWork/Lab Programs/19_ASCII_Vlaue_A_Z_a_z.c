//Write a program to print the ASCII value given character.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    printf("ASCII value of '%c' is %d",ch,ch);
    return 0;
}