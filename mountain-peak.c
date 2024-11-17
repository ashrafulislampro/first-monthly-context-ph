#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, count = 0;
    scanf("%d%d", &n, &m);

    int arr[n][m];

    // Read the grid values
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Traverse the grid to find the mountain peaks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // Check top neighbor
            if (i > 0 && arr[i][j] <= arr[i - 1][j])
            {
                continue;
            }
            // Check bottom neighbor
            if (i < n - 1 && arr[i][j] <= arr[i + 1][j])
            {
                continue;
            }
            // Check left neighbor
            if (j > 0 && arr[i][j] <= arr[i][j - 1])
            {
                continue;
            }
            // Check right neighbor
            if (j < m - 1 && arr[i][j] <= arr[i][j + 1])
            {
                continue;
            }

            // If no neighbor is greater, it's a mountain peak
            count++;
            printf("%d %d\n", i + 1, j + 1); // Output 1-based index
        }
    }

    // If no peaks are found, print 0
    printf("%d\n", count);

    return 0;
}
