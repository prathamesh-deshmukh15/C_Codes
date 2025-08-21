#include<stdio.h>
#include<string.h>
int main(){
    char ch[]="Prathamesh",str1[20],str2[20];
    char ch1[20];
    char ch2[20]=" Deshmukh";
    printf("Length Of String Is : %d\n",strlen(ch));
    printf("Second String Is : %s\n",strcpy(ch1,ch));
    printf("Third String Is : %s\n",strcat(ch,ch2)); 
    printf("Enter String 1 : ");
    gets(str1);
    printf("Enter String 2 : ");
    gets(str2);
    if(strcmp(str1,str2)==0)
        printf("Both Strings Are Equal");
    else
        printf("Strings Are Not Equal");
}