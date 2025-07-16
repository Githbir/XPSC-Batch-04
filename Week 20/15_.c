#include <stdio.h>
int main()
{
    char a[1000], b[1000];
    scanf("%[^$]", a);

    int j = 0, p = 0, w = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != ' ' && a[i] != '.' && a[i] != '\n')
            b[j++] = a[i];

        else if (j > 0)
        {
            p++;
            b[j] = '\0';
            j = 0;

            if (b[0] == 'g' && b[1] == 'o' && b[2] == 'n' && b[3] == 'n' && b[4] == 'a' && b[5] == '\0')
                j = 1, w++;
            if (b[0] == 'a' && b[1] == 'i' && b[2] == 'n' && b[3] == '\'' && b[4] == 't' && b[5] == '\0')
                j = 1, w++;
            if (b[0] == 'w' && b[1] == 'a' && b[2] == 'n' && b[3] == 'n' && b[4] == 'a' && b[5] == '\0')
                j = 1, w++;
            if (b[0] == 'g' && b[1] == 'o' && b[2] == 't' && b[3] == 't' && b[4] == 'a' && b[5] == '\0')
                j = 1, w++;
            if (b[0] == 'l' && b[1] == 'e' && b[2] == 'm' && b[3] == 'm' && b[4] == 'e' && b[5] == '\0')
                j = 1, w++;

            if (j == 1)
                printf("- %s at position %d\n", b, p);
            j = 0;
        }
    }
    printf("Total informal words: %d", w);
}
