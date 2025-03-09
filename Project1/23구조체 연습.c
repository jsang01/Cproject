#define __CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//구조체를 이용해 다음 출력 결과를 완성하세요
//출력 결과
//p2의 좌표는 10,10 입니다
//p1과 p2의 좌표는 서로 같습니다
 
//힌트 1: 좌표에 대한 구조체  point를 설계합니다
//힌트 2: 조건문을 이용한 변수의 비교를 진행해봅니다

/* 내가푼거
struct point
{
	int x;
	int y;
};


int main()
{
	struct point p1 = { 10,10 };
	struct point p2 = { 10,10 };



	return 0;
}*/

struct point
{
	int x;
	int y;
};
int main()
{
	struct point p1 = { 10,10 };
	struct point p2 = { 10,10 };

	printf("p2의 좌료는 %d, %d입니다.\n", p2.x, p2.y);

	if (p1.x == p2.x && p1.y == p2.y)
	{
		printf("p1과 p2의 좌표는 서로 같다.\n");
	}
	else
	{
		printf("p1과 p2의 좌표는 서로 다르다.\n");
	}


	return 0;
}
