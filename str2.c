#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("Enter The String : ");
    scanf("%s",&str);
    printf("String is: %s\n",str);
    printf("Reversed String Is : %s\n",strrev(str));
}