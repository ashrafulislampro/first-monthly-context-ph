#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// Comparator function for qsort
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    char str1[1001], str2[1001];
    
    // Read two strings from input
    scanf("%s%s", str1, str2);
    
    // Sort both strings using qsort
    qsort(str1, strlen(str1), sizeof(char), compare);
    qsort(str2, strlen(str2), sizeof(char), compare);
    
    // Compare the sorted strings
    if (strcmp(str1, str2) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
