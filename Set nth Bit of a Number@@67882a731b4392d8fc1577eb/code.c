// Your code here...
#include <stdio.h>

int main() {
    int num, n;

    
    
    scanf("%d", &num);

    
    scanf("%d", &n);

    // Set the nth bit of num to 1
    num = num | (1 << n);

    // Output the result
    printf("%d", n, num);

    return 0;
}
