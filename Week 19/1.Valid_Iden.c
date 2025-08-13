#include <stdio.h>
int main()
{
    char a[100], b[100];
    scanf("%[^$]", a);
    int i = 0, j = 0;
    // int validCount = 0, invalidCount = 0;

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != ' ' && a[i] != '\0' && a[i] != '\n' && a[i] != '\t')
            b[j++] = a[i];

        else if (j > 0)
        {
            b[j] = '\0';
            printf("%s", b);

            int isValid = 1;
            if (!((b[0] >= 'A' && b[0] <= 'Z') ||
                  (b[0] >= 'a' && b[0] <= 'z') ||
                  b[0] == '_'))
                isValid = 0;

            for (int k = 1; b[k] != '\0'; k++)
            {
                if (!((b[k] >= 'A' && b[k] <= 'Z') ||
                      (b[k] >= 'a' && b[k] <= 'z') ||
                      (b[k] >= '0' && b[k] <= '9') ||
                      b[k] == '_'))
                {
                    isValid = 0;
                    break;
                }
            }
            if (isValid == 1)
                printf(" = Valid\n") /*, validCount++*/;
            else
                printf(" = Invalid\n") /*, invalidCount++*/;

            j = 0;
        }
    }
    // printf("\nTotal Valid: %d\n", validCount);
    // printf("Total Invalid: %d\n", invalidCount);
}
