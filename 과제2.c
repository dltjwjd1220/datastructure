#include <stdio.h>
#include <string.h>

int main()
{
    char input[10];

    printf("���ڿ��� �Է��ϼ��� : ");
    scanf_s("%s", input, sizeof(input));

    printf("\n�Էµ� ���ڿ���\n");
    printf("\"%s\"�Դϴ�.\n", input);

    size_t length;
    if (strlen(input) > 0) {
        length = strlen(input);
        printf("\n�Էµ� ���ڿ��� ���� = %zu\n", length);
    }
    else {
        printf("�Էµ� ���ڿ��� �����ϴ�.\n");
    }

    return 0;
}
