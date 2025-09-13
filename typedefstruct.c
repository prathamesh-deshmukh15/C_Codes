#include<stdio.h>
typedef struct{
    int id;
    char name[50];
}Student;
int main(){
    
    Student s1 = {101,"Alice"};
    printf("ID : %d, Name : %s\n",s1.id,s1.name);
    return 0; 
}