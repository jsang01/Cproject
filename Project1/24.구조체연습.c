#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


/*struct user
{
	char id[100]; //ex)sample12@naver.com
	char pw[100]; //ex) koreaedu1384!@
	char gender;
};

//위의 구조체 user를 이용해 다음에 같은 출력 화면을 완성하세요
// 아이디를 입력해주세요 :sample12@naver.com
// 비밀번호를 입력해주세요 :koreaedu1384!@
// 아이디를 입력해주세요 :sample13@naver.com
// 비밀번호를 입력해주세요 :koreaedu1384!@
// 아이디를 입력해주세요:sample14@naver.com
// 비밀번호를 입력해주세요 :koreaedu1384!@


//유저 테이블
//==========================
// 1.sample12@naver.com koreaedu1384!@
// 2.sample12@naver.com koreaedu1384!@
// 3.sample12@naver.com koreaedu1384!@




int main()
{
	struct user u1 = { "sample12@naver.com" , "koreaedu1384!@",'m'};
	struct user u2 = { "sample13@naver.com", "koreaedu1384!@", 'f' };
	struct user u3 = { "sample14@naver.com" , "koreaedu1384!@",'m' };

	printf("아이디 :");
	scanf("%s", u3.id);
	printf("비밀번호 :");
	scanf("%s", u3.pw);
	getchar(); 
	printf("성별 :");
	scanf("%c", &u3.gender);

	printf("1 : %d : %s : % c\n", u1.id, u1.pw, u1.gender);
	printf("2 : %d : %s : % c\n", u2.id, u2.pw, u2.gender);
	printf("3 : %d : %s : % c\n", u3.id, u3.pw, u3.gender);


	return 0;
}
*/


int main()
{
	// 같은 데이터의 반복 -> 배열 + for 문 접근하기 너무 좋다
	struct user table[3];
	//배열의 개수만큼 반복 시도
	for (int i = 0; i < 3; i++)
	{
		printf("아이디를 입력해주세요 :");
		scanf("%s", table[i].id);
		//id는 char[]따라서 &쓰지 않는다
		getchar();
		// 문장 다음 문자/ 문장 입력? getchar()
		printf("비밀번호를 입력해주세요 :");
		scanf("%s", table[i].pw);
		getchar();

		printf("성별을 입력해주세요 (m,f) :");
		scanf("%c", &table[i].gender);
		//gender는 char 따라서 &쓴다
		getchar();
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s %s %c \n", i + 1. table[i].id, table[i].pw, table[i].gender);
	}
}