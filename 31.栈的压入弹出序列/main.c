#include "common_c.h"
#include "offer_common.h"

bool validateStackSequences(int* pushed, int pushedSize, int* popped, int poppedSize){
    if (!pushed || !popped || (pushedSize != poppedSize) || (pushedSize == 0)|| (0 == poppedSize)) {
        if (!pushed && !popped) {
            return true;
        }
        if ((pushedSize == 0) && (0 == poppedSize)) {
            return true;
        }
        return false;
    }

    int *s = (int *)malloc(sizeof(int) * pushedSize);
    int top = -1;
    int i = 0;
    int i_pop = 0;

    while (i < pushedSize) {
        s[++top] = pushed[i];
        while(1) {
            if (i_pop < poppedSize && top >= 0 && popped[i_pop] == s[top]) {
                top--;
                i_pop++;
                continue;
            }
            break;
        }
        i++;
    }

    return (top == -1) ? true: false;
}

/**
 * @brief test main()
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char **argv)
{
    validateStackSequences();
    printf("result is %d\n", 1);

    return 1;
}
