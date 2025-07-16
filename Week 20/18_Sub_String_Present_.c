#include <stdio.h>
int main()
{
    char str[100], sub[100];
    gets(str);
    gets(sub);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int found = 1;
        for (int j = 0; sub[j] != '\0'; j++)
            if (str[i + j] != sub[j])
                found = 0;
        
        if (found == 1)
        {
            printf("exists\n");
            return 0;
        }
    }
    printf("not\n");
}


