#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int solution(int n) {
    int cnt = 0;
    while (n != 0) {
        n /= 10;
        cnt++;
    }
    return cnt;
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%d\n", solution(n));
    return 0;
}