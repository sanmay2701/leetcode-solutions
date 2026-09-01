#include <stdbool.h>

bool isPalindrome(int x) {
    
    if (x < 0) {
        return false;
    }

    long long reverse = 0;
    int original = x;

    while (x > 0) {
        int remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x /= 10;
    }

    return original == reverse;
}