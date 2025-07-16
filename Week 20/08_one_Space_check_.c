#include <stdio.h>
int main()
{
    char a[1000], b[1000];
    gets(a);
    int j = 0, c = 0;



    
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
        {
            c = 1;
            continue;
        }
        if (c && j > 0)
            b[j++] = ' ';

        b[j++] = a[i];
        c = 0;
    }
    b[j] = '\0';










    for (int i = 0; b[i] != '\0'; i++)
        if (b[i] == ' ')
            printf("\n");
        else
            printf("%c", b[i]);

    printf("\n%s", b);
}
