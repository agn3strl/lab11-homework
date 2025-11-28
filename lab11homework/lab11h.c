#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 10

int main()
{
	setlocale(LC_CTYPE, "RUS");

	float A[N];
	int counter1 = 0;
	printf("Введите элементы массива:\n");
	for (int i = 0; i < N; i++) {
		float temp;
		printf("a[%d] = ", i + 1);
		scanf("%f", &temp);
		A[i] = temp;
		if (A[i] > 0) counter1++;
	}

	int counter2 = 0;
	float sum = 0;
	for (int i = 0; counter2 < counter1; i++) {
		sum += A[i];
		if (A[i] > 0) counter2++;
	}

	printf("Сумма всех элементов массива равна %.2f\n", sum);
	return 0;
}