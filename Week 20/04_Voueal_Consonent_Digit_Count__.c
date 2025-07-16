#include <stdio.h>
int main()
{
    char a[100];
    gets(a);
    // printf("%s", a);

    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            c1++;
        else if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            c1++;
            
        else if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
            c2++;
        else if (a[i] >= '0' && a[i] <= '9')
            c3++;
    }
    printf("V = %d\nC = %d\nD = %d", c1, c2, c3);
}
