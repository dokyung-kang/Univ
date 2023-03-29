int aboveAverageTotal(int* p, int size)
{
	//여기를 pointer 표현으로 작성
	int* pi = p;
	int i;
	int sum = 0;
	for (i = 0; i < size; i++) {
		if (*pi >= 50) {
			sum += *pi;
			printf("%d ", *pi);
		}
		*pi++;
	}
	return sum;
}

int main(void) // 변경하지 마라
{
	int i;
	int n;
	int data[20];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &data[i]);
	printf("\n%d\n", aboveAverageTotal(data, n));
}