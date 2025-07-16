#include <stdio.h>
int main()
{
    char source[1000];
    scanf("%[^$]", source);
    int singleCount = 1, multiCount = 1;

    for (int i = 0; source[i] != '\0'; i++)
    {
        if (source[i] == '/' && source[i + 1] == '/')
        {
            printf("Single cmt %d = //", singleCount++);
            i += 2;

            while (source[i] != '\0' && source[i] != '\n')
                printf("%c", source[i++]);

            printf("\n");
        }

        else if (source[i] == '/' && source[i + 1] == '*')
        {
            printf("multi-line cmt %d = /*", multiCount++);
            i += 2;

            while (source[i] != '*' && source[i + 1] != '/')
                putchar(source[i++]);

            // if (source[i] == '*' && source[i + 1] == '/')
            // {
                printf("*/\n");
                i += 2;
            // }
        }
    }
}
