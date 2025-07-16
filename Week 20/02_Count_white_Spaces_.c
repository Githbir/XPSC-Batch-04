#include <stdio.h>
int main()
{
    char a[100];
    gets(a);
    // fgets(a, sizeof(a), stdin);
    // printf("%s", a);

    int c = 0;
    for (int i = 0; a[i] != '\0'; i++)
        if (a[i] == 32) // 32 = ' '
            c++;

    printf("%d", c);
}

