#include <stdio.h>
int main()
{
    char name[100];
    int i;
    gets(name);

    for (i = 0; name[i] != '\0'; i++)
    {
        while (name[i] == ' ')
            i++;






        printf("%c ", name[i]);
        
        while (name[i] != ' ' && name[i] != '\0')
            i++;

        i--; // adjust
    }
}
