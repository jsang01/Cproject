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
	//���� ������ �迭 number�� �����Ѵ�
	//�ش� ������ �ݺ����� �̿��� ������ ���
	//for (int i = 9; i > -10; i--)
	//	printf("%d", numbers[-i]);


	for (int i = 9; i >= 0; i--)
	{
		printf("%d ", numbers[i]);
	}

	int datas[10];
	//���� 10���� ������ �����͸� ������ �� �ִ� �迭 datas��
	//�غ�Ǿ��ִ�
	//�Է¹��� �̿��ؼ� �迭�� �����͸� ������� �߰����ּ���

	for (int i = 0; i < 9; i++)
	{
		printf("�Է��� ���� �ۼ����ּ���>>>");
		scanf("%d", &datas[i]);
		//datas[0]���� datas[9]���� �� 10���� �����Ͱ� �Է��� ����ȴ�
	}
	printf("���\n");
	
	for (int i = 0; i < 9; i++)
	{
		printf("%d", datas[i]);
	}
	// ����ڴ� 5���� ������ �迭�� �Է¹޴´�
	// �� �� ���ڸ� �ϳ� �� �߰��� �Է��Ѵ�
	//�Է��� ���ڰ� �迭�� �� �� �ִ��� Ȯ���� ���ִ� ���α���

	int iArray[5];
	
	for (int i = 0; i < 5; i++)
	{
		printf("�Է��� ���� �Է��ϼ���>>");
		scanf("%d", &iArray[i]);
	}
	int search_number;
	int count = 0;//�迭�� ������ ���� �� �� �ִ����� Ȯ���ϱ� ���� ����
	printf("���ڸ� �ϳ� �Է����ּ���>>");
	scanf("%d", &search_number);

	for (int i = 0; i < 5; i++)
	{
		//�Է� �� ���� i���� �������� ��� ī��Ʈ 1 ����
		if (search_number == iArray[i])
		{
			count++;
		}
	}
	printf("������ ���� ������ %d���Դϴ�.\n", count);



	return 0;
}