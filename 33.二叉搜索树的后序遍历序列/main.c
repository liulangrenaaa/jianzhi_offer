#include "common_c.h"
#include "offer_common.h"


/**
 *
*/
bool verifyPostorder(int* postorder, int postorderSize){
    if (postorder == NULL)
        return false;
    if (postorderSize == 0 || postorderSize == 1)
        return true;

    int root = postorder[postorderSize - 1];
    int i = 0, j = 0;

    for (i = 0; i < postorderSize - 1; i++) {
        if (postorder[i] > root)
            break;
    }

    j = i;
    for (j = i; j < postorderSize - 1; j++) {
        if (postorder[j] < root)
            return false;
    }

    return verifyPostorder(postorder, i) && verifyPostorder(postorder + i, postorderSize - i - 1);
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
    verifyPostorder();
    printf("result is %d\n", 1);

    return 1;
}
