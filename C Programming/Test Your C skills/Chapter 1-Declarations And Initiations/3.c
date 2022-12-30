
#include<stdio.h>
int main()
{
    int x=40;
    float y=20;
    {
        int x=20;
        printf("\n%d",x);
    }
    printf("\n%d %f",x,y);
    return 0;
}