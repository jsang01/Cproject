# Cproject
 2025-02-08 ~ 2025-03-15 project
# 25-02-09

# 자료형(type)

|이름|형태|크기|표현범위|
|-----|-----|-----|------|
|  int|정수 |4byte|-2147483648 ~ 217483647|
|float|실수 |4byte| 3.4 * 10 -38제곱 ~ 3.4*10 +38제곱|
| char|문자 |1byte| -128~127

# 변수
* 자료형 변수명
* int count
 ```c
#include <stdio.h>
int main()
{
	int count;
 count = 5;
printf("현재의 카운터는 %d입니다.\n", count);
return 0;
}
```
# input(입력)
>사용자가 직접 값을 입력하고 그 값을, 특정 위치에 전달합니다<br>
>일반적으로 변수를 만들고, 그변수에 입력한 값을 적용하는 방식으로 사용한다
```c
int main()
{
	int number;
	printf("intput the number : ");
	scanf_s("%d", &number);
	//visual Studio에서 사용하는 경우라면 scanf_s를 통해 오류를 막을수있다
	printf("number: %d\n", number);
```
# getchar
>1.키보드로부터 하나의 문자를 읽어내는 함수<br>
>2.이 기능은 입력 버퍼를 비우는 용도로도 사용된다<br>
>3.입력 버퍼(buffer):c언어에서 입력을 진행할 경우 바로 값을 넘기는게 아니라<br>
>4.임시로 데이터를 저장하는 별도의 공간에 값을 넣고 전달하는 방식입니다<br>
>5.문자를 다 받기 때문에  enter같은 기능도 값으로 남게 된다

# getchar();
>1.에서 입력한 key 다음 동작인 enter키에에 대한 값을 받아준다


# putchar(문자)
```c
getchar(); 

	char key;
	printf("키를 하나 입력해주세여>>");
	key = getchar();
	putchar(key);
```

# 문자열 만드는 방법
*주의사항
>1.c언어에서의 한글을 입력하는 경우 2칸을 차지한다<br>
>2.현재word는 10개의 단어를 사용할 수 있다<br>
>3.한글을 기준으로는 5개의 단어까지 입력이 가능하다<br>
>4.단 입력을 진핼할 경우 문자의 개수보다 1개정도 적게 작성된다<br>
>5.따라서 영단어는 9글자까지, 한글은 4글자까지 가능
```c
char word[10];
	printf("단어를 입력해주세요>>");
	gets(word);
	puts(word);
```
# define CRT_SECURE_NO_WARNINGS 
>1.프로그램에서의 안전 검사를 하지 않도록 설정하는 코드<br>
>2.이 코드를 추가할 경우 visual studio 내에서 scanf를 사용할 수 있다


[자료형].(#25-02-09).


# 25.02.15

# 연산자(operator)
>1.프로그램에서 연산을 진행할 때 사용하는 기호<br>
>2.ex) 10+5라고 할 때 연산자는 +<br>
>3.연산을 진행할 때 필요한 식이나 값을 항이라고 부른다<br>






