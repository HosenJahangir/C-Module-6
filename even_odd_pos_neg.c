#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (a[i] > 0)
        {
            pos++;
        }
        else if (a[i] < 0)
        {
            neg++;
        }
    }
    printf("%d\n%d\n%d\n%d", even, odd, pos, neg);
    return 0;
}