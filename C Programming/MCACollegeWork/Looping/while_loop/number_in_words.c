
//Write a program to print any number in words.
#include<stdio.h>
int main()
{
    int n,no,rem,rev=0;
    printf("Enter any Number: ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    int r;
    n=rev;
    while (n>0)
    {
        r=n%10;
        switch (r)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        default:
            printf("Not a Number ");
            break;
        }
        n=n/10;
    }
    return 0;
}