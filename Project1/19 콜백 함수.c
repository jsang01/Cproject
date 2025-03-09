#include <stdio.h>
// �ݹ��Լ��� �ٸ� �ڵ��� �μ��� �Ѱ��ִ� ���� ������ �ڵ带 �ǹ��Ѵ�
// �ݹ����� �Ѱܹ��� �ڵ�� ���迡 ���� ��� �����ϰų�, ���߿� �����ϴ� �� �����մϴ�
// Ư�� �̺�Ʈ�� �߻����� �� ����ڰ� ���ϴ� ����� �����ϵ��� �ϱ� ���� �뵵�� �����Ѵ�

// �ݹ� �Լ��� ����� ���
//1. �ݹ��Լ��� ���� ����
//typedef�� �ڷ��� ��� ������ �̸�����, ��� ǥ���� �� �ְ� �����ִ� ����Դϴ�
typedef void (*callback)(void);

//2. �ݹ� �Լ��� ���� ������ ������ �Լ� ����
void setCallback(callback);

//3. �ݹ� �Լ��� ���� ����� ������ �Լ� ����
void useCallback(void);

//4. ����ڰ� �� �Լ��� ���� ����
void useFunction(void);

//5. �ݹ鿡 ���� ���� ���� ����
callback user_callback = NULL;


int main()
{
	printf("�ݹ� �Լ� ���� �� ȣ�� ����\n");
	useCallback();

	//�ݹ� �Լ� ����
	setCallback(useFunction);

	printf("�ݹ� �Լ� ���� �� ȣ�� ����\n");
		useCallback();

	return 0;
}
//6 �Ʒ��� �Լ� ����
void setCallback(callback fp)
{
	user_callback = fp;
}

void useCallback(void)
{
	//user_callback�� ���� �����Ǿ��ִٸ�
	if (user_callback)
	{
		//�ݹ� �Լ��� �����մϴ�
		user_callback();
	}
	else
	{
		// �ƴ� ����� �޼����� ����
		printf("None callback");
	}
}

void useFunction(void)
{
	printf("callback function completed");
}
