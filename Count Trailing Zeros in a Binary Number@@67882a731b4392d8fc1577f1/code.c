// Your code here...
#include <stdio.h>

int countTrailingZeroes(int num) {
    int count = 0;

    // If num is 0, return 32 because all bits are trailing zeros
    if (num == 0) {
        return 32;
    }

    // Keep shifting the number right until the least significant bit is 1
    while ((num & 1) == 0) {
        count++;
        num >>= 1;  // Right shift the number
    }

    return count;
}

int main() {
    int num;

    
    scanf("%d", &num);

    int trailingZeroes = countTrailingZeroes(num);
    printf("%d", trailingZeroes);

    return 0;
}
