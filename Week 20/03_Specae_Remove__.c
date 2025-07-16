#include <stdio.h>
int main()
{
    char a[100];
    gets(a);
    // fgets(a, sizeof(a), stdin);
    // printf("%s", a);

    int c = 0, i = 0;
    while (a[i] != '\0')
    {
        if (a[i] != 32)
            a[c++] = a[i];
        i++;
    }
    a[c] = 0;

    printf("%s", a);
}
