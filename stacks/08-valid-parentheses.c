#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char *s) {
    int top = -1;
    int len = (int)strlen(s);
    char stack[1000];

    for (int i = 0; i < len; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '[' || ch == '{') {
            stack[++top] = ch;
        } else {
            if (top == -1) {
                return false;
            }

            char open = stack[top--];
            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{')) {
                return false;
            }
        }
    }

    return top == -1;
}

int main() {
    char s[] = "()[]{}";
    printf("%s\n", isValid(s) ? "true" : "false");
    return 0;
}
