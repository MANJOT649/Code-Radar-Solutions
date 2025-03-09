// Your code here...
#include <stdio.h>

void printBinary(int num) {
    int i;

    // Iterate over each bit (32 bits for a 32-bit integer)
    for (i = 31; i >= 0; i--) {
        // Shift the bit to the right to get the bit at the i-th position
        int bit = (num >> i) & 1;
        
        // Print the bit (either 0 or 1)
        printf("%d", bit);
    }

    printf("\n");
}

int main() {
    int num;

    
    scanf("%d", &num);

    
    printBinary(num);

    return 0;
}
