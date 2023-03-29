#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isSame(char tempS[], char s[], int sp, int n)
{
	int i;

	for (i = 0; i < n; i++) {
		if (tempS[i] != s[sp + i])
			return 0;
	}
	return 1;
}

int main(void)
{
	char s[1000];
	char s2[1000];
	char tempS[1000];
	int i, j = 0;
	int k;
	int m, n;
	int y, z;
	int count = 1;
	int sN;
	int cntN = 0;
	int len = 0;
	int len1;
	int temp = 1;
	int max = 0;

	scanf("%s", s);
	for (len1 = 0; s[len1] != '\0'; len1++);
	for (m = 1; m < len1; m++) {
		temp = 1;
		y = 0;
		for (z = 0; z < m; z++)
			tempS[z] = s[y++];
		for (i = 0; s[i] != '\0'; i++) {
			if (isSame(tempS, s, i, m))
				count++;
			else {
				if (count != 1) {
					if (count <= 9)
						s2[j++] = (count - 1) + 48;
					else {
						sN = count - 1;
						while (sN != 0) {
							cntN++;
							sN /= 10;
						}
						k = cntN;
						while (cntN != 0) {
							s2[j + cntN - 1] = (count - 1) % 10 + 48;
							cntN -= 1;
							count /= 10;
						}
						j += (k + 1);
					}
					for (z = 0; z < m; z++)
						s2[j++] = tempS[z];
					count = 1;
					len++;
				}
				for (n = i; n < m; n++) {
					if (s[n] == '\0') {
						temp = 0;
						break;
					}
					s2[j++] = s[n];
					len++;
				}
				if (temp == 0)
					break;
			}
			i += (m - 1);
			y = i;
			for (z = 0; z < m; z++)
				tempS[z] = s[y++];
		}
		if (max < len)
			max = len;
	}
	for (i = 0; i < max; i++)
		printf("%c", s2[i]);
	printf("\n");
	printf("%d", max);
}