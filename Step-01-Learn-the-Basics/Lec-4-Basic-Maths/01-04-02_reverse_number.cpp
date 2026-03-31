/*
 * Problem: Reverse Integer
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/reverse-integer/  (Problem #7)
 * Difficulty: Medium
 * Date: 2026-04-01
 *
 * Approach:
 * - Extract the last digit using modulo (n % 10) and build reversed number
 * - Before updating reversed, check for 32-bit integer overflow
 * - Return 0 if overflow would occur
 *
 * Time Complexity: O(log10 N)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    long long rev = 0;
    while (x != 0) {
        int digit = x % 10;
        rev = rev * 10 + digit;
        x /= 10;
    }
    // Check 32-bit signed integer overflow
    if (rev > INT_MAX || rev < INT_MIN) return 0;
    return (int)rev;
}

int main() {
    cout << reverse(123)        << "\n"; // Output: 321
    cout << reverse(-123)       << "\n"; // Output: -321
    cout << reverse(120)        << "\n"; // Output: 21
    cout << reverse(1534236469) << "\n"; // Output: 0 (overflow)
    return 0;
}
