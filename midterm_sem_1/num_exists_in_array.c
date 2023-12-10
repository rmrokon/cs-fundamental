#include <stdio.h>

int main()
{
    int test_cases, size_of_ar, given_num;
    scanf("%d", &test_cases);
    for (int i = 0; i < test_cases; i++)
    {
        scanf("%d", &size_of_ar);

        int ar[size_of_ar];
        for (int i = 0; i < size_of_ar; i++)
        {
            scanf("%d", &ar[i]);
        }

        scanf("%d", &given_num);

        for (int i = 0; i < size_of_ar; i++)
        {
            if (ar[i] == given_num)
            {
                printf("YES\n");
                break;
            }
            else if (i == size_of_ar - 1)
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}