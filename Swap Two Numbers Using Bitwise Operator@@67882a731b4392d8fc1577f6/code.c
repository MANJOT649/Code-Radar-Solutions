// Your code here...
#include <stdio.h>

int main() {
    int a, b;

   
    scanf("%d %d", &a, &b);

    
    a = a + b;  // a becomes the sum of a and b
    b = a - b;  // b becomes the original value of a
    a = a - b;  // a becomes the original value of b

    printf("%d", a, b);

    return 0;
}
