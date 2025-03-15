#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1.파일을 이용해 세이브 / 로드 기능을 보일 수 있는 프로그램을 구현
// 세이브 : 현재의 작업 상태를 파일에 저장하는 것을 의미한다
//로드 : 파일에 있는 데이터를 불러 오는 것을 의미한다

//ex) 1. 레벨업 기능을 구현해서 플레이어 레벨이 1 상승했습니다
//    2. 현재 플레이어의 능력치는 레벨 2 힘 5 민 지 5 행 5 입니다
//    3. 세이브 기능을 사용할 경우 해당 정보가 저장된다
//    4. 새로 하기 기능을 누를 경우 플레이어의 능력치가 reset 된다
//	  5. 이 상태에서 로드를 누를 경우 위에 저장해둔 정보가 다시 플레이어의 능력치로 설정 된다



int main()
{
	int level = 1;
	int choice;
	FILE* fp = NULL;
	
	fp = fopen("program_data.txt", "w");
	if (fp == NULL)
	{
		printf("파일을 열 수 없습니다.\n");
	}
	while (1)
	{
		printf("1. 저장");
		printf("2. 로드");
		printf("3. 종료.");
		scanf("%d", &choice);
		system("cls");

		if (choice == 1)
		{
			fprintf(fp,"%d\n", level);
			printf("게임이 저장됨.\n");
		}
		else
	}

	return 0;
}

int main()

