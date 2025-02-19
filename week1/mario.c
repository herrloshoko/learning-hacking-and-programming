#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("#\n");
    }
    for (int row = 0; row < 3; row++)
    {
        for (int i = 0; i < 3; i++)
        printf("#");
        printf("\n");
    }
}
