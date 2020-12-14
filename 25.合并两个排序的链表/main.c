#include "common_c.h"
#include "offer_common.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *l = NULL,*p = NULL;

    if (l1 && l2) {
        if (l1->val < l2->val) {
            p = l = l1;
            l1 = l1->next;
        } else {
            p = l = l2;
            l2 = l2->next;
        }
    } else if (!l1 && l2) {
        p = l = l2;
        l2 = l2->next;
    } else if (l1 && !l2) {
        p = l = l1;
        l1 = l1->next;
    } else {
        return p;
    }

    while (l1 || l2) {
       if (l1 && l2) {
            if (l1->val < l2->val) {
                l->next = l1;
                l1 = l1->next;
            } else {
                l->next = l2;
                l2 = l2->next;
            }
       } else if (!l1 && l2) {
            l->next = l2;
            l2 = l2->next;
       } else if (l1 && !l2) {
            l->next = l1;
            l1 = l1->next;
       }
       l = l->next;
    }

    return p;
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
    mergeTwoLists();
    printf("result is %d\n", 1);

    return 1;
}
