#include <stdio.h>

void reverseString(char *s, int sSize) {
    for (int i = 0, j = sSize - 1; i < j; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
    char s[] = "hello";
    reverseString(s, 5);
    printf("%s\n", s);
    return 0;
}