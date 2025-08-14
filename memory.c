#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,*p,sum=0;
    printf("Enter The Number Of Elements : ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p == NULL){
        printf("Sorry !!! Unable To Allocate Memory");
        exit(0);
    }
    printf("Enter Elements Of An Array : \n");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
        sum += *(p+i);
    }
    printf("Sum = %d",sum);
    free(p);
    return 0;
}