#include "common_c.h"
#include "offer_common.h"

/**
 * @brief
 *
 * @param s
 * @return char*
 */
char* replaceSpace(char* s){
    if (!s) {
        return s;
    }
    int len = strlen(s);
    int num = 0;
    char *p = s;
    int i = 0;

    for (i = 0; i < len; i++) {
        if (*p == ' ') {
            num++;
        }
        p++;
    }

    int new_len = len + 2 * num;
    char *p_new = (char *)malloc(new_len + 1);
    char *p1 = p_new;


    p = s;
    for (i = 0; i < len; i++) {
        if (*p == ' ') {
            *p1++ = '%';
            *p1++ = '2';
            *p1++ = '0';
            p++;
        } else {
            *p1++ = *p++;
        }

    }

    p_new[new_len] = '\0';
    return p_new;
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
