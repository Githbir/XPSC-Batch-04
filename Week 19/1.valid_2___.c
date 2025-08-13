#include <stdio.h>
int main()
{
    char ar[100];
    scanf("%s", ar);
    int valid = 1;
    char keywords[][10] = {"int", "if", "while", "return", "for", "char", "float"};
    int keywordCount = 7;

    if (!((ar[0] >= 'a' && ar[0] <= 'z') ||
          (ar[0] >= 'A' && ar[0] <= 'Z') ||
          ar[0] == '_'))
        valid = 0;

    for (int i = 1; ar[i] != '\0'; i++)
    {
        if (!((ar[i] >= 'a' && ar[i] <= 'z') ||
              (ar[i] >= 'A' && ar[i] <= 'Z') ||
              (ar[i] >= '0' && ar[i] <= '9') ||
              ar[i] == '_'))
        {
            valid = 0;
            break;
        }
    }

    if (valid == 1)
    {
        for (int k = 0; k < keywordCount; k++)
        {
            int j = 0;
            while (ar[j] != '\0' && keywords[k][j] != '\0' && ar[j] == keywords[k][j])
            {
                j++;
            }
            if (ar[j] == '\0' && keywords[k][j] == '\0')
            {
                valid = 0;
                break;
            }
        }
    }
    if (valid == 1)
        printf("%s is a valid identifier", ar);
    else
        printf("%s is not a valid identifier", ar);
    return 0;
}
