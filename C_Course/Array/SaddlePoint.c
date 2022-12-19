#include <stdio.h>
#include <stdlib.h>

int* luckyNumbers (int** matrix, int matrixSize, int* matrixColSize, int* returnSize){

    int rowMins[matrixSize],colMaxs[*matrixColSize];
    memset(rowMins,0,matrixSize*sizeof(int));
    memset(colMaxs,0,(*matrixColSize)*sizeof(int));;

    int *pointedCol,*pointedRow;
    for(int i=0;i<matrixSize;i++){
            pointedCol=&rowMins[i];
        for(int j=0;j<*matrixColSize;j++){
            pointedRow = &colMaxs[j];
            
            if(matrix[i][*pointedCol] > matrix[i][j]) *pointedCol=j;
            if(matrix[*pointedRow][j] < matrix[i][j]) *pointedRow=i;
        }
    }
    
    *returnSize = 0;
    int *lucNums = (int*) malloc(matrixSize*sizeof(matrix[0][0]));

    for(int i=0;i<matrixSize;i++){
        pointedCol = &rowMins[i];
        if(colMaxs[*pointedCol] == i) lucNums[(*returnSize)++]=matrix[i][*pointedCol];
    }
    printf("%d",*returnSize);
    return lucNums;
}