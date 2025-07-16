#include <stdio.h>
int main()
{
    char a[100];
    scanf("%[^$]", &a);
    printf("%s", a);

    int c = 1;
    for (int i = 0; a[i] != '\0'; i++)
        if (a[i] == '\n') // \n=12, ' '=32
            c++;

    printf("\n%d", c);
}
