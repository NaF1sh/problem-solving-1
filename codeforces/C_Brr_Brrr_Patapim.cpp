#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int grid[801][801];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &grid[i][j]);
            }
        }

        int p[1601] = {0};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int s = i + j + 2;
                if (p[s] == 0)
                {
                    p[s] = grid[i][j];
                }
            }
        }

        int found[1601] = {0};
        for (int s = 2; s <= 2 * n; s++)
        {
            if (p[s] != 0)
            {
                found[p[s]] = 1;
            }
        }

        for (int num = 1; num <= 2 * n; num++)
        {
            if (!found[num])
            {
                p[1] = num;
                break;
            }
        }

        for (int i = 1; i <= 2 * n; i++)
        {
            if (p[i] == 0)
            {
                p[i] = 1; // Fill any remaining positions with a default value
            }
            printf("%d ", p[i]);
        }
        printf("\n");
    }

    return 0;
}