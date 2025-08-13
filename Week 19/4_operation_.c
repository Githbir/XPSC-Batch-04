#include <stdio.h>
int main()
{
    char tanbir[10000];
    char word[100];
    scanf("%[^A]", tanbir);

    int j = 0;
    for (int i = 0; tanbir[i] != '\0'; i++)
    {
        if (tanbir[i] != ' ' && tanbir[i] != '\n' && tanbir[i] != '\t')
            word[j++] = tanbir[i];

        else if (j > 0)
        {
            word[j] = '\0';
            j = 0;

            // arithmetic operator: +, -, *, /, %
            if ((word[0] == '+' && word[1] == '\0') ||
                (word[0] == '-' && word[1] == '\0') ||
                (word[0] == '*' && word[1] == '\0') ||
                (word[0] == '/' && word[1] == '\0') ||
                (word[0] == '%' && word[1] == '\0'))
                printf("%s : Arithmetic Operator\n", word);

            // realtional operator:  ==, !=, <, >, <=, >=
            else if ((word[0] == '=' && word[1] == '=' && word[2] == '\0') ||
                     (word[0] == '!' && word[1] == '=' && word[2] == '\0') ||
                     (word[0] == '<' && word[1] == '=' && word[2] == '\0') ||
                     (word[0] == '>' && word[1] == '=' && word[2] == '\0') ||
                     (word[0] == '<' && word[1] == '\0') ||
                     (word[0] == '>' && word[1] == '\0'))
                printf("%s : Relational Operator\n", word);

            // logical operator: &&, ||, !
            else if ((word[0] == '&' && word[1] == '&' && word[2] == '\0') ||
                     (word[0] == '|' && word[1] == '|' && word[2] == '\0') ||
                     (word[0] == '!' && word[1] == '\0'))
                printf("%s : Logical Operator\n", word);

            // assignment operator: =
            else if (word[0] == '=' && word[1] == '\0')
                printf("%s : Assignment Operator\n", word);

            // invalid operator: If it doesn't match any of the above.
            else
                printf("%s : Invalid Operator\n", word);
        }
    }
    if (j > 0)
    {
        word[j] = '\0';

        // arithmetic operator: +, -, *, /, %
        if (word[0] == '+' && word[1] == '\0')
            printf("%s : Arithmetic Operator\n", word);
        else if (word[0] == '-' && word[1] == '\0')
            printf("%s : Arithmetic Operator\n", word);
        else if (word[0] == '*' && word[1] == '\0')
            printf("%s : Arithmetic Operator\n", word);
        else if (word[0] == '/' && word[1] == '\0')
            printf("%s : Arithmetic Operator\n", word);
        else if (word[0] == '%' && word[1] == '\0')
            printf("%s : Arithmetic Operator\n", word);

        // realtional operator:  ==, !=, <, >, <=, >=
        else if (word[0] == '=' && word[1] == '=' && word[2] == '\0')
            printf("%s : Relational Operator\n", word);
        else if (word[0] == '!' && word[1] == '=' && word[2] == '\0')
            printf("%s : Relational Operator\n", word);
        else if (word[0] == '<' && word[1] == '=' && word[2] == '\0')
            printf("%s : Relational Operator\n", word);
        else if (word[0] == '>' && word[1] == '=' && word[2] == '\0')
            printf("%s : Relational Operator\n", word);
        else if (word[0] == '<' && word[1] == '\0')
            printf("%s : Relational Operator\n", word);
        else if (word[0] == '>' && word[1] == '\0')
            printf("%s : Relational Operator\n", word);

        // logical operator: &&, ||, !
        else if (word[0] == '&' && word[1] == '&' && word[2] == '\0')
            printf("%s : Logical Operator\n", word);
        else if (word[0] == '|' && word[1] == '|' && word[2] == '\0')
            printf("%s : Logical Operator\n", word);
        else if (word[0] == '!' && word[1] == '\0')
            printf("%s : Logical Operator\n", word);

        // assignment operator: =
        else if (word[0] == '=' && word[1] == '\0')
            printf("%s : Assignment Operator\n", word);

        // invalid operator: If it doesn't match any of the above.
        else
        {
            printf("%s : Invalid Operator\n", word);
        }
    }
}
