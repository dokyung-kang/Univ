#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int solution(char s[]) {
    int i, j;
    int len;
    for (len = 0; s[len] != '\0'; len++);

    for (i = 0, j = len - 2; i < len / 2; i++, j--) {
        while (s[i] == " ")
            i++;
        while (s[j] == " ")
            j--;
        if (tolower(s[i]) != tolower(s[j]))
            return 0;
    }
    return 1;
}
int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);
    solution(s);
}