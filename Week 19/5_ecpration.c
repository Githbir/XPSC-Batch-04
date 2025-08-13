#include <stdio.h>
int main()
{
    char tanbir[10000];
    char each_word[100];
    int j = 0;
    scanf("%[^$]", tanbir);

    for (int i = 0; tanbir[i] != '\0'; i++)
    {
        if (tanbir[i] != ' ' && tanbir[i] != '\n' &&
            tanbir[i] != '\t' && tanbir[i] != '+' &&
            tanbir[i] != '*' && tanbir[i] != '-' &&
            tanbir[i] != '/' && tanbir[i] != '%' &&
            tanbir[i] != '(' && tanbir[i] != ')' &&
            tanbir[i] != '{' && tanbir[i] != '}' &&
            tanbir[i] != '[' && tanbir[i] != ']')
        {
            each_word[j++] = tanbir[i];
        }
        else
        {
            if (j > 0)
            {
                each_word[j] = '\0';
                j = 0;

                if (each_word[0] >= '0' && each_word[0] <= '9')
                {
                    printf("NUMBER: %s\n", each_word);
                }
                else if ((each_word[0] >= 'a' && each_word[0] <= 'z') ||
                         (each_word[0] >= 'A' && each_word[0] <= 'Z'))
                {
                    printf("IDENTIFIER: %s\n", each_word);
                }
            }

            if (tanbir[i] == '+' || tanbir[i] == '*' ||
                tanbir[i] == '-' || tanbir[i] == '/' ||
                tanbir[i] == '%')
            {
                printf("OPERATOR: %c\n", tanbir[i]);
            }
            else if (tanbir[i] == '(' || tanbir[i] == ')' ||
                     tanbir[i] == '{' || tanbir[i] == '}' ||
                     tanbir[i] == '[' || tanbir[i] == ']')
            {
                printf("PARENTHESIS: %c\n", tanbir[i]);
            }
        }
    }

    if (j > 0)
    {
        each_word[j] = '\0';

        if (each_word[0] >= '0' && each_word[0] <= '9')
        {
            printf("NUMBER: %s\n", each_word);
        }
        else if ((each_word[0] >= 'a' && each_word[0] <= 'z') ||
                 (each_word[0] >= 'A' && each_word[0] <= 'Z'))
        {
            printf("IDENTIFIER: %s\n", each_word);
        }
    }
    return 0;
}
