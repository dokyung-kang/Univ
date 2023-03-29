#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i = 0, j = 0;
	int len;
	char temp[1000] = "";
	char str1[100];
	char str2[100];
	char s[1000];
	char c[4];
	int n;
	int nI, nJ;
	int min = 999;
	int t;

	scanf("%s", s);
	n = strlen(s);


	for (nI = 1; nI < n; nI++) {
			temp[0] = '\0';
			i = 0;
		//str1[0] = s[i++];
		//str1[1] = s[i++];
		//str1[2] = '\0';
		for (nJ = 0; nJ < nI; nJ++)
			str1[nJ] = s[i++];
		str1[nJ] = '\0';
		len = 1;
		for (i = nI; i < strlen(s); ) {
			//str2[0] = s[i++];
			//str2[1] = s[i++];
			//str2[2] = '\0';
			for (nJ = 0; nJ < nI; nJ++)
				str2[nJ] = s[i++];
			str2[nJ] = '\0';

			if (strcmp(str1, str2) == 0)
				len++;
			else {
				if (len > 1) {
					if (len > 9) {
						c[0] = (len / 10) + '0';
						c[1] = (len % 10) + '0';
						c[2] = '\0';
					}
					else {
						c[0] = len + '0';
						c[1] = '\0';
					}
					strcat(temp, c);
				}
				strcat(temp, str1);

				//str1[0] = str2[0];
				//str1[1] = str2[1];
				//str1[2] = '\0';
				for (nJ = 0; nJ < nI; nJ++)
					str1[nJ] = str2[nJ];
				str1[nJ] = '\0';
				len = 1;
			}
		}
		if (len > 1) {
			if (len > 9) {
				c[0] = (len / 10) + '0';
				c[1] = (len % 10) + '0';
				c[2] = '\0';
			}
			else {
				c[0] = len + '0';
				c[1] = '\0';
			}
			strcat(temp, c);
		}
		strcat(temp, str1);
		if (min > strlen(temp))
			min = strlen(temp);
	}

	//printf("%s\n", temp);
	//printf("%d", strlen(temp));
	printf("%d", min);
}