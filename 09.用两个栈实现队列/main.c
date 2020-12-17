#include "common_c.h"
#include "offer_common.h"

typedef struct {
    int len;
    int *s1; // in
    int *s2; // out
    int top1;
    int top2;
} CQueue;


CQueue* cQueueCreate() {
    CQueue *q = (CQueue *)malloc(sizeof(CQueue));
    q->len = 0;
    q->s1 = (int *)calloc(sizeof(int), 10000);
    q->s2 = (int *)calloc(sizeof(int), 10000);
    q->top1 = -1;
    q->top2 = -1;
    return q;
}

void cQueueAppendTail(CQueue* obj, int value) {
    obj->s1[++obj->top1] = value;
}

int cQueueDeleteHead(CQueue* obj) {
    if (obj->top2 == -1 && obj->top1 == -1) {
        return -1;
    }
again:
    if (obj->top2 >= 0) {
        return obj->s2[obj->top2--];
    } else {
        while (obj->top1 > -1) {
            obj->s2[++obj->top2] = obj->s1[obj->top1--];
        }
        goto again;
    }

    return 0;
}

void cQueueFree(CQueue* obj) {
    free(obj->s1);
    free(obj->s2);
    free(obj);
}

/**
 * Your CQueue struct will be instantiated and called as such:
 * CQueue* obj = cQueueCreate();
 * cQueueAppendTail(obj, value);

 * int param_2 = cQueueDeleteHead(obj);

 * cQueueFree(obj);
*/

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
