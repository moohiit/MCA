
//Initialization of an array at complile time.

#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50} ;// Fully initialized
    int b[5]={13,34,45};       // Partial initialized
    int c[]={23,45,65,67,75,34,6,34}; //other way initializing
    //int d[];  wrong way to initialise will give you an error.
    int e[5]; //other way
    e[0]=236;
    e[1]=236;
    e[2]=231;
    e[3]=224;
    e[4]=234;


    return 0;
}