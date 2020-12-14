#include "common_c.h"
#include "offer_common.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *current, *last, *next;

    last = head;
    if (last == NULL || head->next == NULL) {
        return head;
    }

    current = head->next;
    head->next = NULL;  // 记得将 head->next 设置为null，否则会超时
    while (current) {
        next = current->next;
        current->next = last;
        last = current;
        current = next;
    }

    return last;
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
    reverseList();
    printf("result is %d\n", 1);

    return 1;
}
