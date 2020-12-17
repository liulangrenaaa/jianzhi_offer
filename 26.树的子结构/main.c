#include "common_c.h"
#include "offer_common.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool Does_A_HAVE_B(struct TreeNode* A, struct TreeNode* B) {
    if (NULL == B) {
        return true;
    }

    if (NULL == A) {
        return false;
    }

    if (A->val != B->val) {
        return false;
    }

    return Does_A_HAVE_B(A->left, B->left) && Does_A_HAVE_B(A->right, B->right);
}

bool isSubStructure(struct TreeNode* A, struct TreeNode* B){
    if (NULL == A || NULL == B) {
        return false;
    }

    bool res = false;
    if (A->val == B->val)
        res = Does_A_HAVE_B(A, B);

    if (res == false) {
        res = isSubStructure(A->left, B);
    }

    if (res == false) {
        res = isSubStructure(A->right, B);
    }

    return res;
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
    isSubStructure();
    printf("result is %d\n", 1);

    return 1;
}
