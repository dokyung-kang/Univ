#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int last;

    while (n != 0) {
        last = n % 10;
        answer = answer * 10 + last;
        n /= 10;
    }
    return answer;
}