
#include <stdio.h>

// Function to reverse a given number
int reverseNumber(int num,int *reversedNum) {
     *reversedNum = 0;

    while (num != 0) {
        int remainder = num % 10;
        *reversedNum = *reversedNum * 10 + remainder;
        num /= 10;
    }

}

