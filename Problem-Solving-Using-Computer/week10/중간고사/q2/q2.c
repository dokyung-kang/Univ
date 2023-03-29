#include <stdio.h>
int div(int n, int k, int list[])
{
    int i = 0;
    while (n != 0) {
        list[i++] = n % k;
        n /= k;
    }
    return i;
}
int palidrome(int array[], int len)
{
    int i;

    for (i = 0; i < len / 2; i++)
        if (array[i] != array[len - 1 - i])
            return 0;
    return 1;
}
int main(void)
{
    int n, k;
    int array[100];
    int len;

    scanf("%d %d", &n, &k);

    len = div(n, k, array);
    printf("%d\n", palidrome(array, len));

    return 0;
}