#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000], tokens[100][100];
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

    int visited[100] = {0};
    for (i = 0; i < tokenCount; i++)
    {
        if (visited[i])
            continue;

        int count = 1;
        for (j = i + 1; j < tokenCount; j++)
        {
            // if (strcmp(tokens[i], tokens[j]) == 0)
            // {
            //     count++;
            //     visited[j] = 1;
            // }
            int same = 1;
            for (k = 0; tokens[i][k] != '\0' || tokens[j][k] != '\0'; k++)
            {
                if (tokens[i][k] != tokens[j][k])
                    same = 0;
            }
            if (same > 0)
            {
                count++;
                visited[j] = 1;
            }
        }
        printf("%s : %d\n", tokens[i], count);
    }
}
