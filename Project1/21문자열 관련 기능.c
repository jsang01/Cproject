#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//문자열 관련 작업 함수 기능

int main()
{
	//1. 문자열 작성 방법
	//char 문자열명[]= "문장";
	char name[] = "자바";
	//name = "파이썬"; //배열은 수정 불가
	 
	//2 char* 형태
	char* job = "Application developer";
	job = "Programmer"; //가리키는 값이 변경된 것이므로 가능
	printf("%s %s", name, job);

	//2. 문자율 배열
	// char 배열명[][열의 길이] = {"문자열1","문자열 2",}
	char inventory[][20] = { "바나나","딸기","사과","포도" };

	//3. char* 형태
	char* shop[] = { "딸기바나나","딸기사과" };

	//함수1, strlen()
	char array1[] = "C Programming";
	char array2[] = "씨 프로그래밍";

	printf("array1의 문자열의 길이 = %lu\n", strlen(array1));
	printf("array1의 문자열의 길이 = %lu (sizeof)\n", sizeof(array1));
	//% : 서식지정자
	//l : long(정수)
	//u : unsigend(부호가 따로 없다)
	printf("array2의 문자열의 길이 = %lu\n", strlen(array2));
	printf("array2의 문자열의 길이 = %lu(sizeof)\n", sizeof(array2));

    //sizeof보다 더 정확하게 사용 가능한 길이를 알 수 있음

	//함수2. strcpy()
	//strcpy(바꿀 문장, 바꾸려는 문장)을 통해 문자열의 값을 변경하거나, 복사하는데 사용한다
	//일반적으로는 문자열을 변경할 수 없기 때문

	char sample[] = "apple";
	char sample2[20];


	strcpy(sample2, sample);
	printf("%s", sample2);

	//함수3. strncpy()
	//strncpy
	char sample3[] = "Hello Everyone";
	char sample4[20];
	strncpy(sample4, sample3, 5); //비어있는 값에다 복사해줄 경우 이상한 값이 들어가게 됌
	sample4[5] = '\0';
	printf("%s", sample4);

	// 함수4 strcat()
	//strcat(문자열1, 문자열2)를 통해 문자열 1에 문자열 2를 합칠 수 있다
	char sample5[20] = "C언어";
	char sample6[] = "프로그래밍";
	strcat(sample5, sample6); //합칠 경우 문자열 1쪽이 길이가 더 커야 오류가 없음
	printf("%s", sample5);

	//함수 5 strcmp()
	//strcmp(문자열1, 문자열2)
	// 두 문자열을 비교한다, 빅 결과에 따라 다음과 같은 값을 return한다
	//0: 두 문자열은 서로 같다
	//-1 : 서로 다르다

	//위는 일반적인 경우고 실제로는 다름
	//문자열1 < 문자열2인 경우 음수
	//문자열1 > 문자열2인 경우 양수
	//문자열 1 == 문자열 2인경우 0 



	// 크기의 기준은 ASCII(아스키 코드)를 기준으로 판단한다
	//ex) "ApplePIE"
	//ex) "ApplfPIE"
	// 이 둘을 strcmp로 비교할 경우 나올 값은?

	printf("%d\n", strcmp("ApplePIE", "ApplfPIE"));

	//이 함수의 용도? strcmp로 비교한 결과 값이 0이면 같다는 점을 이용해서 문자열에 대한 확인 용도




	return 0;
}