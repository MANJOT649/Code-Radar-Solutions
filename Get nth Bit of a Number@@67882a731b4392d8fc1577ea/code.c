// Your code here...
#include <stdio.h>

int main() {
    int num, n, bitValue;

    
    scanf("%d", &num);

    
    scanf("%d", &n);

    
    bitValue = (num >> n) & 1;

    printf("%d",bitValue);

    return 0;
}
