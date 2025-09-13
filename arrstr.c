#include<stdio.h>
#include<string.h>
struct Student{
    int roll_no ;
    char name[100];
};
int main(){
    int i;
    struct Student st[5];
    printf("Enter Records Of 5 Students : ");
    for(i=0;i<5;i++){
        printf("\nEnter Roll_No : ");
        scanf("%d",&st[i].roll_no);
        printf("\nEnter Name : ");
        scanf("%d",&st[i].name);
    }
    printf("Student Information : \n");
    for(i=0;i<5;i++){
        printf("\n Roll_No : %d, Name : %s\n",st[i].roll_no,st[i].name);
    }
}
