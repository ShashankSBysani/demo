/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include"palindrome.h"
int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    int reversedNum;
    reverseNumber(num ,&reversedNum);

    // Output the reversed number
    printf("Reversed number: %d\n", reversedNum);
    if (num==reversedNum)
    {
        printf("output is palindrome");
    }
    else
    {
        printf("output is palindrome");
    }

    return 0;
}
