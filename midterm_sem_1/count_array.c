#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001];
    scanf("%s", str);
    int count[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        count[str[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            printf("%c - %d\n", i + 97, count[i]);
        }
    }

    return 0;
}