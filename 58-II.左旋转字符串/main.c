#include "common_c.h"
#include "offer_common.h"

char* reverseLeftWords(char* s, int n){
    if (s == NULL) 
        return NULL;

    int len = strlen(s);
    int i = 0, j = 0;
    char *p = (char *)calloc((len + 1), sizeof(char *));

    n = n % len;
    if (n == 0) {
        return s;
    }

    i = 0;
    while (i < n) {
        p[(len - n) + i] = s[i];
        i++;
    }

    i = n;
    while (i < len) {
        p[i - n] = s[i];
        i++;
    }

    p[len] = '\0';

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
    leetcode_func();
    printf("result is %d\n", 1);

    return 1;
}
