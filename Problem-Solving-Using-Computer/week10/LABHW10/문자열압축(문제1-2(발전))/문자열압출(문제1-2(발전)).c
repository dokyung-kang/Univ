#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s[1000];
	char s2[1000];
	int i, j = 0;
	int k;
	int count = 1;
	int sN;
	int cntN = 0;
	int len = 0;

	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++) {
		if ((s[i] == s[i + 2]) && (s[i + 1] == s[i + 3]))
			count++;
		else {
			if (count != 1) {
				if (count <= 9)
					s2[j++] = count + 48;
				else {
					sN = count;
					while (sN != 0) {
						cntN++;
						sN /= 10;
					}
					k = cntN;
					while (cntN != 0) {
						s2[j + cntN - 1] = count % 10 + 48;
						cntN -= 1;
						count /= 10;
					}
					j += k;
				}
				count = 1;
				len++;
			}
			s2[j++] = s[i];
			len++;
			if (s[i + 1] == '\0')
				break;
			s2[j++] = s[i + 1];
			len++;;
		}
		i++;
	}
	for (i = 0; i < len; i++)
		printf("%c", s2[i]);
	printf("\n");
	printf("%d", len);
}