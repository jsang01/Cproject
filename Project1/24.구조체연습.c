#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


/*struct user
{
	char id[100]; //ex)sample12@naver.com
	char pw[100]; //ex) koreaedu1384!@
	char gender;
};

//���� ����ü user�� �̿��� ������ ���� ��� ȭ���� �ϼ��ϼ���
// ���̵� �Է����ּ��� :sample12@naver.com
// ��й�ȣ�� �Է����ּ��� :koreaedu1384!@
// ���̵� �Է����ּ��� :sample13@naver.com
// ��й�ȣ�� �Է����ּ��� :koreaedu1384!@
// ���̵� �Է����ּ���:sample14@naver.com
// ��й�ȣ�� �Է����ּ��� :koreaedu1384!@


//���� ���̺�
//==========================
// 1.sample12@naver.com koreaedu1384!@
// 2.sample12@naver.com koreaedu1384!@
// 3.sample12@naver.com koreaedu1384!@




int main()
{
	struct user u1 = { "sample12@naver.com" , "koreaedu1384!@",'m'};
	struct user u2 = { "sample13@naver.com", "koreaedu1384!@", 'f' };
	struct user u3 = { "sample14@naver.com" , "koreaedu1384!@",'m' };

	printf("���̵� :");
	scanf("%s", u3.id);
	printf("��й�ȣ :");
	scanf("%s", u3.pw);
	getchar(); 
	printf("���� :");
	scanf("%c", &u3.gender);

	printf("1 : %d : %s : % c\n", u1.id, u1.pw, u1.gender);
	printf("2 : %d : %s : % c\n", u2.id, u2.pw, u2.gender);
	printf("3 : %d : %s : % c\n", u3.id, u3.pw, u3.gender);


	return 0;
}
*/


int main()
{
	// ���� �������� �ݺ� -> �迭 + for �� �����ϱ� �ʹ� ����
	struct user table[3];
	//�迭�� ������ŭ �ݺ� �õ�
	for (int i = 0; i < 3; i++)
	{
		printf("���̵� �Է����ּ��� :");
		scanf("%s", table[i].id);
		//id�� char[]���� &���� �ʴ´�
		getchar();
		// ���� ���� ����/ ���� �Է�? getchar()
		printf("��й�ȣ�� �Է����ּ��� :");
		scanf("%s", table[i].pw);
		getchar();

		printf("������ �Է����ּ��� (m,f) :");
		scanf("%c", &table[i].gender);
		//gender�� char ���� &����
		getchar();
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s %s %c \n", i + 1. table[i].id, table[i].pw, table[i].gender);
	}
}