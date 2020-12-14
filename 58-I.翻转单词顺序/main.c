#include "common_c.h"
#include "offer_common.h"

char* reverseWords(char* s){

    if (!s || !(s+1)) {
        return s;
    }

    int size = strlen(s);
    char *p = NULL;
    char *wf = NULL, *wp = NULL;
    int i = 0;

    p = (char *)malloc(size * sizeof(char));

    wf = s + size - 1;
    while(wf > s) {
        if (wf != ' ') {
            wf--;
        } else {
            ;
        }

        while (1) {
            p[i++] = 
        }
    }

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
