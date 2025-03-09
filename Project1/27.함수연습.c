#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 연습 문제
// 첫 째 줄부터 다섯 번째 줄까지 한 줄씩 자연수를 입력할 수있다
// 입력이 완료될 경우 첫째 중에는 평균을 출력하고 
// 둘째 줄에서는 중앙 값을 출력합니다
// 평균은 주어진 모든 수의 합/ 수의 개수로 표현한다
// 중앙 값은 주어진 수를 크기 순서대로 정리했을 경우, 가장 중앙에 있는 값을 의미
// ex) 입력 값이 10 40 30 60 30 일 경우 (10+ 40 + 30 + 60+ 30) / 5 =34
//	   중앙 값을 계산하는 경우 10 30 30 40 60 중 가운데 값인 30
// 위의 조건을 만족하는 함수를 설계해 프로그램을 완성하세요


int avg(int sum, int count)
{
	return (int) sum / count;
	// int 와 int를 나누게 되면 소수점 자리가 없기 때문에 float를 덮어줘서 소수점 자리 확보한다
}
// 배열 전체의 값을 조사래서 중앙 값 확인(배열 정렬)
int center(int* numbers, int size)
{
	int result = 0;//중앙갑

	int temp;// 임시 값
	// 전체 횟수 반복
	for (int i = 0; i < size; i++)
	{
		// i가 반복함에 따라 반복하는 범위가 감소함
		// 전체 사이즈보다 1작은 범위부타 시작(처음 값과 다음 값을 비교하기 때문)
		for (int j = 0; j < (size - 1) - i; j++)
		{
			// i번째 값과 i+1번째 값을 비교해 i번째 값을 더 클 경우라면 변경한다
			if (numbers[j] > numbers[j + 1])
			{
				temp = numbers[j];// 기존값 저장
				numbers[j] = numbers[j + 1];// 다음 값 저장
				numbers[j + 1] = temp; // 가존 값 넘겨줌
			}
		}
	}
	//정렬이 끝난 후 중앙 갑 =배열의 개수 /2 위치에 해당하는 값
	return result = numbers[(int)(size / 2)];
}

int sum(int numbers[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result += numbers[i];
	}
	return result;
}



int main()
{
	int numbers[5];
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &numbers[i]);
	}
	int avg_value = avg(numbers, 5);// 배열의 합 = sum
	int sum_value = sum(numbers, 5);// 배열의 평균 = avg
	int center_value = center(numbers, 5);// 배열의 중앙값 = center
	
	printf("%d\n", avg_value);
	printf("%d\n", center_value);
	
	return 0;
}