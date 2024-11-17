#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, max_val = 0, min_val = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max_score = arr[0], min_score = arr[0];
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        if (x > max_score)
        {
            max_score = x;
            max_val++;
        }
        else if (x < min_score)
        {
            min_score = x;
            min_val++;
        }
    }
    printf("%d %d\n", max_val, min_val);
    return 0;
}
