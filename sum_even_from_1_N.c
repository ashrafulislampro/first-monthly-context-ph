#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int n, sum = 0;
    
    // Read two strings from input
    scanf("%d", &n);
    
    for(int i = 2; i <= n; i+=2){
        sum+= i;
    }

    printf("%d\n", sum);

    return 0;
}
