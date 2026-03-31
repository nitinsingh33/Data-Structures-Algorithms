/*
 * Problem: Count Digits
 * Platform: GeeksforGeeks
 * Link: https://www.geeksforgeeks.org/problems/count-digits5716/1
 * Difficulty: Easy
 * Date: 2026-04-01
 *
 * Approach:
 * - Use a while loop to extract digits one by one using % 10
 * - Increment count for each digit that evenly divides the original number
 * - Avoid division by zero for digit 0
 *
 * Time Complexity: O(log10 N)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    int count = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0 && n % digit == 0) {
            count++;
        }
        temp /= 10;
    }
    return count;
}

int main() {
    cout << countDigits(12)  << "\n"; // Output: 2  (1 divides 12, 2 divides 12)
    cout << countDigits(33)  << "\n"; // Output: 2  (3 divides 33, 3 divides 33)
    cout << countDigits(100) << "\n"; // Output: 1  (only 1 divides 100; 0 is skipped)
    return 0;
}
