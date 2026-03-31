/*
 * Problem: Palindrome Number
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/palindrome-number/  (Problem #9)
 * Difficulty: Easy
 * Date: 2026-04-01
 *
 * Approach:
 * - Negative numbers are never palindromes
 * - Numbers ending in 0 (except 0 itself) are never palindromes
 * - Reverse the second half of the number and compare with the first half
 *   to avoid overflow (instead of reversing the full number)
 *
 * Time Complexity: O(log10 N)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    // Negative numbers and numbers ending in 0 (except 0) are not palindromes
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;

    int reversedHalf = 0;
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }
    // For odd-length numbers, the middle digit is in reversedHalf/10
    return x == reversedHalf || x == reversedHalf / 10;
}

int main() {
    cout << boolalpha;
    cout << isPalindrome(121)  << "\n"; // Output: true
    cout << isPalindrome(-121) << "\n"; // Output: false
    cout << isPalindrome(10)   << "\n"; // Output: false
    cout << isPalindrome(0)    << "\n"; // Output: true
    cout << isPalindrome(1221) << "\n"; // Output: true
    return 0;
}
