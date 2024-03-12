#include <stdio.h>

int main(void)
{
    const char* ptr[4] = { "Korea", "Seoul", "Mapo", "152¹øÁö 2 / 3" };

    for (int i = 0; i < 4; i++) {
        printf("%s\n", ptr[i]);
    }

    return 0;
}