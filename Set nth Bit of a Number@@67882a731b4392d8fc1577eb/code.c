#include <stdio.h>

int main() {
    int num, n;

    
    scanf("%d", &num);

    
    scanf("%d", &n);

    
    num = num | (1 << n);  

    // Output the result
    printf("%d", num);

    return 0;
}
