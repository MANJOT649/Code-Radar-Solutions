// Your code here...
#include <stdio.h>

int main() {
    int num, position = 0;

   
    scanf("%d", &num);

    if (num == 0) {
        printf("The number is 0, so there is no set bit.\n");
    } else {
        position = num & -num;

       
        int bitPosition = 0;
        while (position > 1) {
            position >>= 1;
            bitPosition++;
        }

        printf("%d", bitPosition);
    }

    return 0;
}
