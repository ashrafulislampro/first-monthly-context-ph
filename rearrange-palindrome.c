#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);     // Read the string
    int freq[26] = {0}; // Frequency array for characters 'a' to 'z'

    // Count frequency of each character
    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
    }

    int odd_count = 0;

    // Count how many characters have an odd frequency
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            odd_count++;
        }
    }

    printf("%d\n", odd_count > 1 ? odd_count - 1 : 0);

    return 0;
}
