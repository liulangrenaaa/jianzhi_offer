#include "common_c.h"
#include "offer_common.h"

char firstUniqChar(char* s){
    int len = strlen(s);
    int arr[26];
    int i = 0;

    if (s == NULL) {
        return ' ';
    }

    if (len == 1) {
        return s[0];
    }

    memset(arr, 0 , sizeof(arr));

    for (i = 0; i < len; i++) {
        arr[s[i] - 'a']++;
    }

    for (i = 0; i < len; i++) {
        if (arr[s[i] - 'a'] == 1) {
            return s[i];
        }
    }

    return ' ';
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
