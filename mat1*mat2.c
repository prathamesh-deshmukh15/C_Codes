#include<stdio.h>
int main(){
    int i,j,Product=0;
    printf("Elements Of Matrix 1 Are : \n");
    int matrix1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("matrix[%d][%d] = %d\n",i,j,matrix1[i][j]);
        }
    }
        
    printf("\nGiven Matrix 1 Is : \n");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
        }
        printf("\n");

        printf("Elements Of Matrix 2 Are : \n");
        int matrix2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("matrix[%d][%d] = %d\n",i,j,matrix2[i][j]);
        }
    }
        
    printf("\nGiven Matrix 2 Is : \n");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
        }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            Product = matrix1[i][j] * matrix2[i][j] ;
        }
    }
    printf("\nMultiplication Matrix = \n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",Product);
        }
        printf("\n");
    }
    return 0;
}