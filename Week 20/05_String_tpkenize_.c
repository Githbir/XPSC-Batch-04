#include <stdio.h>
int main()
{
    char str[100], token[20];
    int i = 0, j = 0;
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
            token[j++] = str[i];

        else if (j > 0)
        {
            token[j] = '\0';
            j = 0;
            printf("%s\n", token);
        }
    }
    if (j > 0)
    {
        token[j] = '\0';
        printf("%s\n", token);
    }
}
