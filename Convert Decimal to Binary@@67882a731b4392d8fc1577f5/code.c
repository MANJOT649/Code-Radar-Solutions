#include <stdio.h>

void printBinary(int num) {
    // If the number is 0, print 0
    if (num == 0) {
        printf("0");
        return;
    }

    int started = 0;  // Flag to track if we have started printing bits

    // Iterate over each bit (from most significant bit to least)
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;  // Get the bit at the i-th position

        // Start printing when we encounter the first 1
        if (bit == 1) {
            started = 1;
        }

        // Print the bit only if we've encountered the first 1
        if (started) {
            printf("%d", bit);
        }
    }
}

int main() {
    int num;

    
    scanf("%d", &num);

    
    printBinary(num);
    printf("\n");

    return 0;
}
