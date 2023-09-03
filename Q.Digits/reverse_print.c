#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        while (n != 0)
        {
            printf("%d", n % 10);
            n = n / 10;
        }
        printf("\n");
    }
    return 0;
}