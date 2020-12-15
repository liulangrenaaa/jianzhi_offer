#include "common_c.h"
#include "offer_common.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int a = 0, b = 0, c = 0;
    struct ListNode *pa = NULL, *pb = NULL;

    pa = headA;
    while(pa) {
        pa = pa->next;
        a++;
    }

    pb = headB;
    while(pb) {
        pb = pb->next;
        b++;
    }

    c = (a > b)? (a - b): (b -a);
    if (a > b) {
        pa = headA;
        pb = headB;
    } else {
        pa = headB;
        pb = headA;
    }

    while(c--) {
        pa = pa->next;
    }
    int d = (a > b)? b: a;
    while(pa) {
        if (pa == pb) {
            return pa;
        }
        pa = pa->next;
        pb = pb->next;
    }
    return NULL;
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
