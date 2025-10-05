//Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    printf("Diagonal traversal of the matrix:\n");
    for(int d = 0; d < rows + cols - 1; d++) {
        for(i = 0; i <= d; i++) {
            j = d - i;
            if(i < rows && j < cols)
                printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");
    return 0;
}
