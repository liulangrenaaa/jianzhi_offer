#include "common_c.h"
#include "offer_common.h"

bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target){
    matrix[0][0] = 1;
    return true;
}

bool findNumberIn2DArray3(int **matrix, int matrixSize, int* matrixColSize, int target){
    int hang = matrixSize;
    int lie = *matrixColSize;
    int size = hang * lie;
    int i = 0, j = 0;
    int (*array)[lie] = (int (*)[])matrix;

    printf("size= %d, lie= %d, hang= %d, target is [%d] \n", size, lie, hang, target);
    printf("array[0][0] = %d, array[0][1] = %d, array[0][2] = %d, \n",
                array[0][0], array[0][1], array[0][2]);

    if (NULL == array) {
        return false;
    }

    if (1 == size) {
        if (array[0][0] == target) {
            return true;
        }

        return false;
    }

    i = 0; j = lie -1;
    printf("target is [%d] \n", target);
    while ((i <= hang -1) && (j >= 0)) {
        printf("i = %d, j = %d. array[%d][%d] = [%d]\n", i, j, i, j, array[i][j]);
        if (array[i][j] == target) {
            printf("found it! i = %d, j = %d. \n", i, j);
            return true;
        } else if (array[i][j] > target) {
            j--;
        } else if (array[i][j] < target) {
            i++;
        }
    }

    return false;
}

bool findNumberIn2DArray2(int** matrix, int matrixSize, int* matrixColSize, int target){
    if (matrix == NULL || matrixSize == 0 || *matrixColSize == 0 ){
                        //此处加上 *matrix == NULL || 会报错
        return false;//传参检查
    }
    for (int i = 0, j = *matrixColSize - 1; i < matrixSize && j >= 0;){
        if (target < matrix[i][j]){//越左->越小
            j--;//向左移动寻找小于等于target的数
        }
        else if (target > matrix[i][j]){//越下->越大
            i++;//向下移动寻找大于等于target的数
        }
        else{//不大不小->刚刚好
            return true;
        }
    }
    return false;
}

int main(int argc, char **argv)
{
    int hang = 0, lie = 0, size = 0;
    bool result = false;
    int array[][5] = {
                        {1,   4,  7, 11, 15},
                        {2,   5,  8, 12, 19},
                        {3,   6,  9, 16, 22},
                        {18, 21, 23, 26, 30}
                    };

    hang = sizeof(array) / sizeof(array[0]);
    lie = sizeof(array[0]) / sizeof(array[0][0]);
    size = hang * lie;

    printf("[main]hang is %d, lie is %d, size = %d, array = %p, array[0][0] = %p.\n",
                hang, lie, size, array, &array[0][0]);
    show_two_array_num((const int **)array, hang, lie);
    result = findNumberIn2DArray(array, hang, &lie, 5);
    printf("result is %d\n", result);

    result = findNumberIn2DArray(array, hang, &lie, 20);
    printf("result is %d\n", result);
    return 1;
}

bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target){

}
