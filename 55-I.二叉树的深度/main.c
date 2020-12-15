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


int maxDepth(struct TreeNode* root){
    if (root) {
        struct TreeNode* right = root->right;
        struct TreeNode* left = root->left;
        int left_depth = maxDepth(left);
        int right_depth = maxDepth(right);
        int max_depth = left_depth > right_depth? left_depth : right_depth;
        return max_depth + 1;
    }

    return 0;

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
    leetcode_func();
    printf("result is %d\n", 1);

    return 1;
}
