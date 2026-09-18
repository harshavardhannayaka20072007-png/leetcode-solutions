#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char *s, char *t) {
    int count[26] = {0};
    int sLen = 0;
    int tLen = 0;

    while (s[sLen] != '\0') {
        count[s[sLen] - 'a']++;
        sLen++;
    }

    while (t[tLen] != '\0') {
        count[t[tLen] - 'a']--;
        tLen++;
    }

    if (sLen != tLen) {
        return false;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char s[] = "anagram";
    char t[] = "nagaram";

    printf("%s\n", isAnagram(s, t) ? "true" : "false");
    return 0;
}
