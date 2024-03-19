#include <stdio.h>

int main(void)
{
    const char* ptr[4] = { "Korea", "Seoul", "Mapo", "152번지 2 / 3" };
    const char* pto[4] = { "Korea", "Seoul", "Jongno", "152번지 2 / 3" };

        for (int i = 0; i < 4; i++) {
            printf("%s\n", ptr[i]);
        }
        printf("\n\n");

        for (int j = 0; j < 4; j++) {
            printf("%s\n", pto[j]);
        }

    return 0;
}
