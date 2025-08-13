#include<stdio.h>
int main(){
    int a=5,*p;
    p=&a;
    printf("Value Of a is : %d\n",a);
    printf("Address Of a is : %d\n",&a);
    printf("Value Of a using pointer Is : %d\n",*p);
    printf("Address Of a using pointer is : %d\n",p);
    return 0;
}