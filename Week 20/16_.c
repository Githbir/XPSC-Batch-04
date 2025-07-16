#include <stdio.h>
int main()
{
    char a[1000], b[1000];
    gets(a); // scanf("%[^$]", a);

    int j = 0, sp = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
        {
            sp = 1;
            continue;
        }
        if (j > 0 && sp)
            b[j++] = ' ';

        sp = 0;
        b[j++] = a[i];
    }
    b[j] = '\0';

    for (int i = 0; b[i] != '\0'; i++)
        if ((b[i] == '.' || b[i] == ',') && i > 0)
        {
            b[i - 1] = b[i];
            b[i] = ' ';
        }
    printf("%s", b);
}
