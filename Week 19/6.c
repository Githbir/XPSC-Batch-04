#include <stdio.h>
int main()
{
    char tanbir[100];
    scanf("%s", tanbir); // gets(tanbir);

    int flag = 1, len = 0;
    for (int i = 0; tanbir[i] != '\0'; i++) // printf("%d", len);
        len++;

    if (tanbir[0] != 'a' || tanbir[len - 1] != 'a')
        flag = 0;

    char ch = tanbir[1];
    
    for (int i = 1; i < len - 1; i++)
    {
        if (tanbir[i] != ch)
            flag = 0;
    }

    if (flag == 1) // a(a|b)*a
        printf("Acc");
    else
        printf("Unacc");

    return 0;
}
