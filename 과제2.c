#include <stdio.h>
#include <string.h>

int main()
{
    char input[10];

    printf("문자열을 입력하세요 : ");
    scanf_s("%s", input, sizeof(input));

    printf("\n입력된 문자열은\n");
    printf("\"%s\"입니다.\n", input);

    size_t length;
    if (strlen(input) > 0) {
        length = strlen(input);
        printf("\n입력된 문자열의 길이 = %zu\n", length);
    }
    else {
        printf("입력된 문자열이 없습니다.\n");
    }

    return 0;
}
