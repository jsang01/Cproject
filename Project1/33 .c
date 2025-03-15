#include <stdio.h>
#include <stdlib.h>

int main() {
    int level = 1;
    int choice;
    FILE* fp = NULL;

    // ������ ���� ���� �غ�
    fp = fopen("program_data.txt", "w");  // ���� �б�/���� ���� ����
    if (fp == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    while (1) {
        printf("1. ����\n2. �ε�\n0. ����\n");
        scanf("%d", &choice);
        system("cls");  // ȭ���� ����

        if (choice == 1) {
            // ���̺� ���
            fprintf(fp, "%d\n", level);  // ���Ͽ� ���� ����
            printf("���� �����.\n");
        }
        else if (choice == 2) {
            // �ε� ���
            rewind(fp);  // ���� �����͸� ó������ �ǵ�����
            fscanf(fp, "%d", &level);  // ���Ͽ��� ���� �б�
            printf("���� �ε��. ����: %d\n", level);
        }
        else if (choice == 0) {
            // ����
            fclose(fp);  // ���� �ݱ�
            exit(0);  // ���α׷� ����
        }
        else {
            printf("�߸��� �����Դϴ�.\n");
        }
    }

    return 0;
}
