#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void char_logic (char s);
int check (char * s);
int main()
{
    char inp[1000];
    int init = 0;
    gets (inp);
    if (check (inp) == 1)
    {
        for (int i = 0; i < strlen(inp); i++)
        {
            if (inp[i] == ' ')
                init = 0;
            else
            {
                if (init == 0)
                    char_logic(inp[i]);
                init = 1;
            }
        }
    }
    return 0;
}
void char_logic (char s)
{
    if (islower(s))
        printf("%c", s - 32);
    else
        printf("%c", s);
}
int check (char * s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (isalpha(s[i]) == 0 && s[i] != ' ')
        {
            printf("Symbol is not abc or space. Symbol number is %d", i);
            return 0;
        }
        i++;
    }
    return 1;
}
