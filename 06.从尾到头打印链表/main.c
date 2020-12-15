#include "common_c.h"
#include "offer_common.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* reversePrint(struct ListNode* head, int* returnSize){
    *returnSize = 0;
    if (head == NULL) {
        return NULL;
    }

    if (head->next == NULL) {
        *returnSize = 1;
        return &head->val;
    }

    struct ListNode *pf = NULL, *ps = NULL, *current = NULL;
    ps = NULL;
    current = head;
    while(current) {
        pf = current->next;
        current->next = ps;
        ps = current;
        current = pf;
        (*returnSize)++;
    }

    int *arr = (int *)malloc(sizeof(int) * (*returnSize));
    int i = 0;
    while(ps) {
        arr[i++] = ps->val;
        ps = ps->next;
    }

    return arr;
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
