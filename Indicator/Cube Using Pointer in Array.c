#include <stdio.h>

int cube(int num) {
    return num * num * num;
}

void Cubes(int *arr, int rows, int cols) 
{
    printf("Cubes of Elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", cube(*(arr + i * cols + j)));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter the elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    Cubes(&arr[0][0], rows, cols);

    return 0;
}
