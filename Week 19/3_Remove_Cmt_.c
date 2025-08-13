#include <stdio.h>
int main()
{
    char code[1000];
    scanf("%[^$]", code);
    int printSpace = 0;

    for (int index = 0; code[index] != '\0';)
    {
        if (code[index] == '/' && code[index + 1] == '/')
        {
            index += 2;
            while (code[index] != '\0' && code[index] != '\n')
                index++;
        }

        else if (code[index] == '/' && code[index + 1] == '*')
        {
            index += 2;
            while (code[index] != '\0' && !(code[index] == '*' && code[index + 1] == '/'))
                index++;
            if (code[index] != '\0')
                index += 2;
        }
        else
        {
            if (code[index] == ' ' || code[index] == '\t' || code[index] == '\n')
            {
                printSpace = 1;
            }
            else
            {
                if (printSpace)
                {
                    printf(" ");
                    printSpace = 0;
                }

                printf("%c", code[index]);

                if (code[index] == ';' || code[index] == '{')
                    printf("\n");
            }
            index++;
        }
    }
    return 0;
}
