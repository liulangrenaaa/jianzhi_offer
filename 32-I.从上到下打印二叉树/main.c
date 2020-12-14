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

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *levelOrder(struct TreeNode *root, int *returnSize)
{
}


/**
 * 创建一个队列，用low和high作为队列的头尾指针，先将二叉树的根入队列并将尾指针high加一；
进入循环，循环结束条件为low >= high，代表遍历了整个队列即遍历了整个二叉树；
将队列中的当前元素赋给根root，同时将队列头指针low加一，并用一个数组res获取根的值；
再判断根的左右子树是否为空，若不为空则入队同时将尾指针high加一；
循环结束返回数组res。
 */
int *levelOrder(struct TreeNode *root, int *returnSize)
{
    if (root == NULL) //二叉树为空则返回空
    {
        *returnSize = 0;
        return NULL;
    }
    struct TreeNode **queue = (struct TreeNode **)malloc(sizeof(struct TreeNode *) * 10000); //创建一个二叉树模拟队列
    int *res = (int *)malloc(sizeof(int) * 10000);
    int low = 0, high = 0, num = 0; //头尾指针以及要返回的元素个数
    queue[high++] = root;           //将二叉树的根入队
    while (low < high)              //遍历二叉树
    {
        root = queue[low++];
        res[num++] = root->val; //将二叉树当前根的值放入到数组中
        if (root->left != NULL) //判断左子树是否为空，不为空则入队
            queue[high++] = root->left;
        if (root->right != NULL) //右子树
            queue[high++] = root->right;
    }
    *returnSize = num;
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
    levelOrder();
    printf("result is %d\n", 1);

    return 1;
}
