#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef void (*server_connection)(char* id, int pw);
void connect_SERVER(server_connection callback);
void on_server_connected(char* id, int pw);
void on_server_disconnectio();
void Login();
void setting(server_connection fp);
void OnLogin(char* id, int pw);

char uid[] = "abc1234";
int pass = 123456;
server_connection sc = NULL;

int main()
{
	Login();
	connect_SERVER(sc);
	return 0;
}

void connect_SERVER(server_connection callback)
{
	if (callback)
		on_server_connected();	
	else	
		on_server_disconnected();
}


void on_server_connected()
{
	printf("서버에 연걸을 성공했습니다.");
}

void on_server_disconnected()
{
	printf("아이디 또는 비밀번호가 잘못됐습니다.");
}
void Login()
{
	char name[20]; //프로그램에서 사용할 아이디 이름
	int pw;        //프로그램에서 사용할 비밀번호

	printf("아이디를 입력합니다.");
	scanf("%s", name);
	printf("비밀번호를 입력합니다.");
	scanf("%d" &pw);

	setting(OnLogin);
	sc(name, pw);
	
	if (name == id % %pw == pass)
	{
		setting(fp);
	}
}

void setting(server_connection fp)
{
	sc = fp;
}

void OnLogin(char* id, int pw)
{    // stecmp(문장,문장) == 0은 두 문장이 같은 값인지 확인하는 코드
	if (strcmp(uid,id) == 0 && upass == pw)
	{
		printf("success");
	}
	else
	{
		sc = NULL;
		printf("fail");
	}
}
