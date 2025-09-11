#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[50];
}e1;
int main(){
    e1.id = 101;
    strcpy(e1.name,"John");
    printf("Employee 1 Id : %d\n",e1.id);
    printf("Employee 1 Name : %s\n",e1.name);
    return 0;
}