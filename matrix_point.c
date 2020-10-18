#include <stdio.h>
#include <stdlib.h>
int main()
{
    int** a;
    int column = 10;
    int row = 5;
    
    // 二维矩阵的指针定义
    a = (int**)malloc(row*sizeof(int*)); 
    for(int i = 0;i < column;i++ )
    {
        a[i] = (int*)malloc(sizeof(int)*column);
    } 

    for(int i = 0;i < row;i++){
        for(int k = 0;k < column;k++){
            a[i][k] = (i+1)*(k+1);
            printf("%d ",a[i][k]);
        }
        printf("\n");
    }

    return 0;
}
