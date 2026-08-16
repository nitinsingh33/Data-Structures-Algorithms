// 7. Reverse Integer

#include <iostream>
#include <climits>  // provides integer limits such as INT_MAX and INT_MIN
using namespace std;

int reverseNumber(int x) {
    int ans = 0;

    while (x != 0) {
        int digit = x % 10;  // Get the last digit of x

        // Check if ans * 10 will cause integer overflow
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
            return 0;
        }

        ans = ans * 10 + digit;
        x = x / 10;
    }

    return ans;
}

int main() {
    int x;

    cout << "Enter a number: ";
    cin >> x;

    int result = reverseNumber(x);

    cout << "Reversed number: " << result << endl;

    return 0;
}
