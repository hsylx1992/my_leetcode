/*
最大连续子序列求和
*/

#include <stdio.h>

int maxSubArray(int A[], int n) {
	int i;
	int sum_i = 0;
	int sum_max = -(~(1<<31)); // -2147483647

	//printf("%d\n", sum_max);

	for ( i = 0; i < n; i++) {
		if (sum_i + A[i] >= A[i]) {
			sum_i += A[i];
		} else {
			sum_i = A[i];
		}
		
		if (sum_i >sum_max) {
			sum_max = sum_i;
		}
		//printf("%d\t", sum_max);
	}

	return sum_max;
}

int main()
{
	int AA  = {-2,1,-3,4,-1,2,1,-5,4};
	int sum = maxSubArray(AA, sizeof(AA)/sizeof(int));
	printf("\n%d\n", sum);

	return 0;
}

