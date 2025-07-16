#include <stdio.h>
int main()
{
    char a[1000], b[100];
    scanf("%[^$]", a);

    int j = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != ' ')
            b[j++] = a[i];

        else if (j > 0)
        {
            b[j] = '\0';
            j = 0;

            if (b[0] == 'a' && b[1] == 'b' && b[2] == 'b' && b[3] == '\0')
                printf("Valid Under The Rule: %s = 'abb'\n", b);

            else if (b[0] == 'a' && b[strlen(b) - 1] == 'a')
                printf("Valid Under The Rule: %s = 'a*'\n", b);

            else if (b[0] == 'b' && b[strlen(b) - 1] == 'b')
                printf("Valid Under The Rule: %s = 'a*b+'\n", b);

            else if (b[0] == 'a' && b[strlen(b) - 1] == 'b')
                printf("Valid Under The Rule: %s = 'a*b+'\n", b);
        }
    }
    if (j > 0)
    {
        b[j] = '\0';

        if (b[0] == 'a' && b[1] == 'b' && b[2] == 'b' && b[3] == '\0')
            printf("Valid Under The Rule: %s = 'abb'\n", b);

        else if (b[0] == 'a' && b[strlen(b) - 1] == 'a')
            printf("Valid Under The Rule: %s = 'a*'\n", b);

        else if (b[0] == 'b' && b[strlen(b) - 1] == 'b')
            printf("Valid Under The Rule: %s = 'a*b+'\n", b);

        else if (b[0] == 'a' && b[strlen(b) - 1] == 'b')
            printf("Valid Under The Rule: %s = 'a*b+'\n", b);
    }
}