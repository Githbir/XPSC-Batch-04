#include <stdio.h>
int main()
{
    char str[1000], tokens[100][100], maxWord[100];
    int tokenCount = 0;
    gets(str);
    int i = 0, j = 0, k = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            tokens[tokenCount][j++] = str[i];

        else if (j > 0)
        {
            tokens[tokenCount][j] = '\0';
            tokenCount++;
            j = 0;
        }
    }
    if (j > 0)
    {
        tokens[tokenCount][j] = '\0';
        tokenCount++;
    }

    int maxFrequency = 0;
    for (i = 0; i < tokenCount; i++)
    {
        int count = 1;
        for (j = i + 1; j < tokenCount; j++)
        {
            int same = 1;
            for (k = 0; tokens[i][k] != '\0' || tokens[j][k] != '\0'; k++)
            {
                if (tokens[i][k] != tokens[j][k])
                    same = 0;
            }
            if (same > 0)
                count++;
        }

        if (count > maxFrequency)
        {
            maxFrequency = count;
            for (k = 0; tokens[i][k] != '\0'; k++)
            {
                maxWord[k] = tokens[i][k];
            }
            maxWord[k] = '\0';
        }
    }
    printf("Word : %s\n", maxWord);
    printf("Max frequency: %d\n", maxFrequency);
}
