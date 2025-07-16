#include <stdio.h>
int main()
{
    char input[1000], cleaned[1000];
    // gets(input);
    scanf("%[^$]", input); // more line input

    int j = 0, foundSpace = 0;

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == ' ' || input[i] == '\n')
        {
            foundSpace = 1;
            continue;
        }
        else if (foundSpace && j > 0)
            cleaned[j++] = ' ';
        
        cleaned[j++] = input[i];
        foundSpace = 0;
    }
    cleaned[j] = '\0';







    
    printf("%s\n", cleaned);

    for (int i = 0; cleaned[i] != '\0'; i++)
        if (cleaned[i] == ' ')
            printf("\n");
        else
            printf("%c", cleaned[i]);
}
