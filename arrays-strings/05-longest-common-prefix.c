#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize) {
    if (strsSize == 0) {
        char *empty = (char *)malloc(1);
        empty[0] = '\0';
        return empty;
    }

    char *prefix = (char *)malloc(strlen(strs[0]) + 1);
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (strs[i][j] != '\0' && prefix[j] != '\0' && strs[i][j] == prefix[j]) {
            j++;
        }

        prefix[j] = '\0';
    }

    return prefix;
}

int main() {
    char *words[] = {"flower", "flow", "flight"};
    char *answer = longestCommonPrefix(words, 3);
    printf("%s\n", answer);
    free(answer);
    return 0;
}
