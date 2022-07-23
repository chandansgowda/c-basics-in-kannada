#include <stdio.h>

void main(){

    int matrix[3][3];

    printf("Enter matrix elements\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Entered matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}