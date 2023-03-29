#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int solution(char s[]) {
    int i, j;
    int len;
    for (len = 0; s[len] != '\0'; len++);
    j = len - 1;
    for (i = 0; i < len; i++, j--) {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
        if (isupper(s[j]))
            s[j] = tolower(s[j]);
        if (s[i] == ' ')
            i++;
        if (s[j] == ' ')
            j--;
        if (s[i] != s[j])
            return 0;
    }
    return 1;
}