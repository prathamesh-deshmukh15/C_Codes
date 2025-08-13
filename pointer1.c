#include<stdio.h>
int main(){
    int a,*p,**pp;
    printf("Enter Value Of a : ");
    scanf("%d",&a);
    p=&a;
    pp=&p;
    printf("Value Of a is : %d\n",a);
    printf("Address Of a is : %d\n",&a);
    printf("Value Of a using pointer Is : %d\n",*p);
    printf("Address Of a using pointer is : %d\n",p);
    printf("Address Of Pointer p is : %d\n",pp);
    return 0;
}