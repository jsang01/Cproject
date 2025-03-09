#include <stdio.h>
//M : È½¼ö
//idx : ÀÎµ¦½º
//sum : ÃÑÇÕ

int arr[] = { 1,2,3,4 };

void Backtracking(int N, int M, int idx int sum)
{
	if (M == 2)
	{
		if (sum > 6)
		{
			printf("%d %d", arr[idx - 1], arr[idx - 2]);
		}
		return;
	}
	for (int i = idx; i < N; i++)
	{
		Backtraking(N, M + 1, i + 1, sum + arr[i]);
	}
}

int main()
{

	return 0;
}
