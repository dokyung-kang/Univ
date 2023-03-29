#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int num = n;
    int cnt = 0;
    int i;

    while (num != 0) {
        num /= 10;
        cnt++;
    }
    for (i = 0; i < cnt; i++) {
        answer = answer * 10 + n % 10;
        n /= 10;
    }

    return answer;
}