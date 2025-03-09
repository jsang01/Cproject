#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int numbers[] = { 1,2,3,4,5,6,7,8,9,10 };
	//0 ~ 9
	for (int i = 0; i < 10; i++)
	{
		printf("%d", numbers[i]);
	}
	//현재 위에는 배열 number가 존재한다
	//해당 값들을 반복문을 이용해 역순을 출력
	//for (int i = 9; i > -10; i--)
	//	printf("%d", numbers[-i]);


	for (int i = 9; i >= 0; i--)
	{
		printf("%d ", numbers[i]);
	}

	int datas[10];
	//현재 10개의 정수형 데이터를 저장할 수 있는 배열 datas가
	//준비되어있다
	//입력문을 이용해서 배열에 데이터를 순서대로 추가해주세요

	for (int i = 0; i < 9; i++)
	{
		printf("입력할 값을 작성해주세요>>>");
		scanf("%d", &datas[i]);
		//datas[0]부터 datas[9]까지 총 10개의 데이터가 입력이 진행된다
	}
	printf("결과\n");
	
	for (int i = 0; i < 9; i++)
	{
		printf("%d", datas[i]);
	}
	// 사용자는 5개의 정수를 배열로 입력받는다
	// 그 후 숫자를 하나 더 추가로 입력한다
	//입력한 숫자가 배열에 몇 개 있는지 확인할 수있는 프로그현

	int iArray[5];
	
	for (int i = 0; i < 5; i++)
	{
		printf("입력할 값을 입력하세요>>");
		scanf("%d", &iArray[i]);
	}
	int search_number;
	int count = 0;//배열에 조사한 값이 몇 개 있는지를 확인하기 위한 변수
	printf("숫자를 하나 입력해주세요>>");
	scanf("%d", &search_number);

	for (int i = 0; i < 5; i++)
	{
		//입력 한 값이 i번재 데이터일 경우 카운트 1 증가
		if (search_number == iArray[i])
		{
			count++;
		}
	}
	printf("조사한 값의 개수는 %d개입니다.\n", count);



	return 0;
}