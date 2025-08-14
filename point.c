#include<stdio.h>
int main(){
    int i,n;
    printf("Enter Size Of An Array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    printf("Printing Array Elements : \n");
    for(i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
}