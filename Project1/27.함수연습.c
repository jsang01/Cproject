#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// ���� ����
// ù ° �ٺ��� �ټ� ��° �ٱ��� �� �پ� �ڿ����� �Է��� ���ִ�
// �Է��� �Ϸ�� ��� ù° �߿��� ����� ����ϰ� 
// ��° �ٿ����� �߾� ���� ����մϴ�
// ����� �־��� ��� ���� ��/ ���� ������ ǥ���Ѵ�
// �߾� ���� �־��� ���� ũ�� ������� �������� ���, ���� �߾ӿ� �ִ� ���� �ǹ�
// ex) �Է� ���� 10 40 30 60 30 �� ��� (10+ 40 + 30 + 60+ 30) / 5 =34
//	   �߾� ���� ����ϴ� ��� 10 30 30 40 60 �� ��� ���� 30
// ���� ������ �����ϴ� �Լ��� ������ ���α׷��� �ϼ��ϼ���


int avg(int sum, int count)
{
	return (int) sum / count;
	// int �� int�� ������ �Ǹ� �Ҽ��� �ڸ��� ���� ������ float�� �����༭ �Ҽ��� �ڸ� Ȯ���Ѵ�
}
// �迭 ��ü�� ���� ���緡�� �߾� �� Ȯ��(�迭 ����)
int center(int* numbers, int size)
{
	int result = 0;//�߾Ӱ�

	int temp;// �ӽ� ��
	// ��ü Ƚ�� �ݺ�
	for (int i = 0; i < size; i++)
	{
		// i�� �ݺ��Կ� ���� �ݺ��ϴ� ������ ������
		// ��ü ������� 1���� ������Ÿ ����(ó�� ���� ���� ���� ���ϱ� ����)
		for (int j = 0; j < (size - 1) - i; j++)
		{
			// i��° ���� i+1��° ���� ���� i��° ���� �� Ŭ ����� �����Ѵ�
			if (numbers[j] > numbers[j + 1])
			{
				temp = numbers[j];// ������ ����
				numbers[j] = numbers[j + 1];// ���� �� ����
				numbers[j + 1] = temp; // ���� �� �Ѱ���
			}
		}
	}
	//������ ���� �� �߾� �� =�迭�� ���� /2 ��ġ�� �ش��ϴ� ��
	return result = numbers[(int)(size / 2)];
}

int sum(int numbers[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result += numbers[i];
	}
	return result;
}



int main()
{
	int numbers[5];
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &numbers[i]);
	}
	int avg_value = avg(numbers, 5);// �迭�� �� = sum
	int sum_value = sum(numbers, 5);// �迭�� ��� = avg
	int center_value = center(numbers, 5);// �迭�� �߾Ӱ� = center
	
	printf("%d\n", avg_value);
	printf("%d\n", center_value);
	
	return 0;
}