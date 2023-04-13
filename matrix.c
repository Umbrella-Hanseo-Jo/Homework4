#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("[----- [Hanseo Jo] [2022041012] -----")
    int row, col;

    // 행과 열의 값을 입력 받음
    printf("Enter the values for the rows and columns of the matrix.\n");
    scanf("%d %d", &row, &col);

    // 2차원 배열 동적 메모리 할당
    int **matrix = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++) {
        matrix[i] = (int *)malloc(col * sizeof(int));
    }

    // 행렬의 값을 입력 받음
    printf("Enter a value for the matrix.\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 행렬 출력
    printf("The entered matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // 동적 메모리 해제
    for (int i = 0; i < row; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}