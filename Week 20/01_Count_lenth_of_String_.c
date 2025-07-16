#include <stdio.h>
int main()
{
    char a[1000];
    scanf("%s", a);

    int l = 0;
    for (int i = 0; a[i] != '\0'; i++) // strlen(a)
    {
        l++;
    }
    printf("Len = %d", l);
}
