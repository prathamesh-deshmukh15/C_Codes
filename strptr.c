#include<stdio.h>
#include<string.h>
struct Employee{
    int emp_id;
    char emp_name[50];
};
int main(){
    struct Employee e1 = {201,"John"};
    struct Employee *ptr = &e1 ;
    printf("Employee Id : %d\n",ptr->emp_id);
    printf("Employee Name : %s\n",ptr->emp_name);
}