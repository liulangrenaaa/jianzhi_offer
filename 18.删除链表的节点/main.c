#include "common_c.h"
#include "offer_common.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteNode(struct ListNode* head, int val){
    struct ListNode *last = NULL, *current = NULL, *next = NULL;

    if (head == NULL) {
        return head;
    }

    if (head->val == val) {
        return head->next;
    }

    last = head;
    current = head->next;
    while (current) {
        next = current->next;
        if (val == current->val) {
            last->next = next;
            break;
        }
        last = last->next;
        current = current->next;
    }

    return head;
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
    deleteNode();
    printf("result is %d\n", 1);

    return 1;
}
