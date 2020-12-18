#include "common_c.h"
#include "offer_common.h"

typedef struct {
    int *s;
    int top;
    int *s_min;
    int top_min;
} MinStack;

/** initialize your data structure here. */

MinStack* minStackCreate() {
    MinStack *p = (MinStack *)malloc(sizeof(MinStack));
    MinStack *p_min = (MinStack *)malloc(sizeof(MinStack));
    memset(p , 0, sizeof(MinStack));
    memset(p_min , 0, sizeof(MinStack));

    p->s   = (int *)malloc(20000 * sizeof(int));
    p->top = -1;

    p->s_min   = (int *)malloc(20000 * sizeof(int));
    p->top_min = -1;
    return p;
}

void minStackPush(MinStack* obj, int x) {
    obj->s[++obj->top] = x;
    if (obj->top_min == -1) {
        obj->s_min[++obj->top_min]= x;
    }
    if (x < obj->s_min[obj->top_min]) {
        obj->s_min[++obj->top_min]= x;
    } else {
        obj->s_min[obj->top_min + 1]= obj->s_min[obj->top_min];
        obj->top_min++;
    }
}

void minStackPop(MinStack* obj) {
    if (obj->top >= 0) {
        obj->top--;
        obj->top_min--;
    }
}

int minStackTop(MinStack* obj) {
    if (obj->top >= 0) {
        return obj->s[obj->top];
    }
    return 0;
}

int minStackMin(MinStack* obj) {
    if (obj->top >= 0) {
        return obj->s_min[obj->top_min];
    }
    return 0;
}

void minStackFree(MinStack* obj) {
    free(obj->s);
    free(obj->s_min);
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, x);

 * minStackPop(obj);

 * int param_3 = minStackTop(obj);

 * int param_4 = minStackMin(obj);

 * minStackFree(obj);
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
