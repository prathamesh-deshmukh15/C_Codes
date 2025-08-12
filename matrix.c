#include<stdio.h>
int main(){
    int r,c;
    printf("Enter Number Of Rows : ");
    scanf("%d",&r);
    printf("Enter Number Of Columns : ");
    scanf("%d",&c);
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("matrix[%d][%d] = %d\n",i,j,matrix[i][j]);
        }
    }
        
    printf("\nGiven Matrix Is : \n");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
        }
}