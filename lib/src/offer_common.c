#include "common_c.h"
#include "offer_common.h"

void show_array_num(const int *array, const int array_size)
{
    int i = 0;

    if (NULL == array) {
        printf("NULL pointer array!\n");
        return;
    }

    if (!array_size) {
        return;
    }
    printf("%d", array[0]);
    for (i = 1; i < array_size; i++) {
        printf(", %d", array[i]);
    }

    printf("\n");
}

void show_array_char(const char *array, const int array_size)
{
    int i = 0;

    if (NULL == array) {
        printf("NULL pointer array!\n");
        return;
    }

    if (!array_size) {
        return;
    }

    printf("%c", array[0]);
    for (i = 1; i < array_size; i++) {
        printf(", %c", array[i]);
    }

    printf("\n");
}

void show_array_string(const char **array, const int array_size)
{
    int i = 0;

    if (NULL == array) {
        printf("NULL pointer array!\n");
        return;
    }

    if (!array_size) {
        return;
    }

    printf("%s", array[0]);
    for (i = 1; i < array_size; i++) {
        printf(", %s", array[i]);
    }

    printf("\n");
}


void show_two_array_num(const int **array, const int hang, const int lie)
{
    int i = 0, j =0;
    const int *p = (const int *)array;

    // printf("hang is %d, lie is %d, array = %p, array[0][0] = %p.\n",
    //             hang, lie, array, (int *)(array + (0 *i + 0 *j)));

    if (NULL == array) {
        printf("NULL pointer array!\n");
        return;
    }

    if (!(hang || lie)) {
        printf("hang and lie all is zero\n");
        return;
    }
    printf("[\n");
    for (i = 0; i < hang; i++) {
        j = 0;
        printf("%5d", *(int *)(p + (hang *i + j)));
        for (j = 1; j < lie; j++) {
            printf(", %5d", *(int *)(p + (hang *i + j)));
        }
        printf("\n\n");
    }
    printf("]\n");

    // printf("\n                                                         \n");
    // for (i = 0; i < hang; i++) {
    //     j = 0;
    //     printf("%p", (int *)(p + (hang *i + j)));
    //     for (j = 1; j < lie; j++) {
    //         printf(", %p", (int *)(p + (hang *i + j)));
    //     }
    //     printf("\n");
    // }

}