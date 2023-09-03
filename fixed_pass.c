#include <stdio.h>
int main()
{

    int n;
    while (scanf("%d", &n) != EOF) // input size na thakle while loop with EOF.
    {
        if (n == 1999)
        {
            printf("Correct\n");
            break;
        }

        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}