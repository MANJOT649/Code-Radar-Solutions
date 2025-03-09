// Your code here...
#include <stdio.h>

int countLeadingZeroes(int num) {
    int count = 0;

    
    if (num == 0) {
        return 32;
    }

    
    while ((num & (1 << 31)) == 0) {
        count++;
        num <<= 1;
    }

    return count;
}

int main() {
    int num;

    scanf("%d", &num);

    int leadingZeroes = countLeadingZeroes(num);
    printf("%d", leadingZeroes);

    return 0;
}
