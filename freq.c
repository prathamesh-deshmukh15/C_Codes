#include<stdio.h>
#include<string.h>
int main(){
    char str[1000],ch;
    int count = 0;
    printf("Enter A String : ");
    fgets(str, sizeof(str), stdin);
    printf("Enter A Character To Find Its Frequency : ");
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++){
    if(ch==str[i]);
    count++;
    }
    printf("Frequency Of %c = %d\n",ch,count);
    return 0;
}