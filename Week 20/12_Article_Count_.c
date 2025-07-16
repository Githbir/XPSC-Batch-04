#include <stdio.h>
int main()
{
    char a[100], b[100];
    gets(a);
    int i = 0, j = 0, c_a = 0, c_an = 0, c_the = 0;

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] = a[i] + 32;

        if (a[i] != ' ' && a[i] != '\0')
            b[j++] = a[i];






        else if (j > 0)
        {
            b[j] = '\0';

            if (b[0] == 'a' && b[1] == '\0')
                c_a++;
            else if (b[0] == 'a' && b[1] == 'n' && b[2] == '\0')
                c_an++;
            else if (b[0] == 't' && b[1] == 'h' && b[2] == 'e' && b[3] == '\0')
                c_the++;

            j = 0;
        }
    }
    if (j > 0)
    {
        b[j] = '\0';

        if (b[0] == 'a' && b[1] == '\0')
            c_a++;
        else if (b[0] == 'a' && b[1] == 'n' && b[2] == '\0')
            c_an++;
        else if (b[0] == 't' && b[1] == 'h' && b[2] == 'e' && b[3] == '\0')
            c_the++;
    }




    
    printf("A = %d\n", c_a);
    printf("An = %d\n", c_an);
    printf("The = %d\n", c_the);
}
