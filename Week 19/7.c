#include <stdio.h>
int main()
{
    char tanbir[100];
    scanf("%s", tanbir);

    int len = 0;
    for (int i = 0; tanbir[i] != '\0'; i++)
        len++;

    int a = 0, b = 0;

    for (int i = 0; i < len - 1; i++)
    {
        if (tanbir[i] == 'b')
            b++;

        if (tanbir[i] == 'a')
            a++;
    }
    if (tanbir[len - 1] == 'a' || tanbir[len - 1] == 'b')
        a++;

    if (b >= 2 && b + a == len) // (a|b)* b (a|b)* b (a|b)
        printf("Acc");
    else
        printf("Unacc");

    return 0;
}
