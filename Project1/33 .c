#include <stdio.h>
#include <stdlib.h>

int main() {
    int level = 1;
    int choice;
    FILE* fp = NULL;

    // 파일을 열고 저장 준비
    fp = fopen("program_data.txt", "w");  // 파일 읽기/쓰기 모드로 열기
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    while (1) {
        printf("1. 저장\n2. 로드\n0. 종료\n");
        scanf("%d", &choice);
        system("cls");  // 화면을 지우

        if (choice == 1) {
            // 세이브 기능
            fprintf(fp, "%d\n", level);  // 파일에 레벨 저장
            printf("게임 저장됨.\n");
        }
        else if (choice == 2) {
            // 로드 기능
            rewind(fp);  // 파일 포인터를 처음으로 되돌리기
            fscanf(fp, "%d", &level);  // 파일에서 레벨 읽기
            printf("게임 로드됨. 레벨: %d\n", level);
        }
        else if (choice == 0) {
            // 종료
            fclose(fp);  // 파일 닫기
            exit(0);  // 프로그램 종료
        }
        else {
            printf("잘못된 선택입니다.\n");
        }
    }

    return 0;
}
