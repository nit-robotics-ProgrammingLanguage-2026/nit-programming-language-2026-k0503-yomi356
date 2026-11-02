#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if (input < 0 || input >= 10 || input == 5)
    {
        printf("OK\n");
    }
    else
    {
        printf("NG\n");
    }
    return 0;
}
