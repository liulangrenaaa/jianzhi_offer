#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

void func(int ** array, int lie)
{
    int (*p)[lie] = (int (*)[])array;

    printf("p: %p\n", p);
    printf("p[0]: %p\n", p[0]);
    printf("p[0][0]: %d\n", p[0][0]);

    printf("array: %p\n", array);
    printf("array[0]: %p\n", array[0]);
    printf("array[0][0]: %d\n", array[0][0]);

}

bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target){
    int (*p)[matrixSize] = (int (*)[])matrix;

    printf("p: %p\n", p);
    printf("p[0]: %p\n", p[0]);
    printf("p[0][0]: %d\n", p[0][0]);

    printf("matrix: %p\n", matrix);
    printf("matrix[0]: %p\n", matrix[0]);
    printf("matrix[0][0]: %d\n", matrix[0][0]);
}


int main(int argc, char **argv)
{
    int hang = 0, lie = 0, size = 0;
    bool result = false;
    int array[][5] = {
                        {1,   4,  7, 11, 15},
                        {2,   5,  8, 12, 19},
                        {3,   6,  9, 16, 22},
                        {10, 13, 14, 17, 24},
                        {18, 21, 23, 26, 30}
                    };
    // func((int **)array, 5);
    hang = 5;
    lie = 5;
    findNumberIn2DArray((int **)array, 5, &lie, 5);

    return 0;
}