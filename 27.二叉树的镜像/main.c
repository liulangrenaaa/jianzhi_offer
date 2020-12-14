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
struct TreeNode* mirrorTree(struct TreeNode* root){
    if (root) {
        struct TreeNode* left = root->left;
        struct TreeNode* right = root->right;
        root->left = mirrorTree(right);
        root->right = mirrorTree(left);
    }

    return root;
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
    mirrorTree();
    printf("result is %d\n", 1);

    return 1;
}
