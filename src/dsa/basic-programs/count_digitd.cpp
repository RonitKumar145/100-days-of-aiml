#include<iostream>
using namespace std;

int countDigits(int n) {
    int cnt = 0;

    while (n > 0) {
        int lastDigit = n % 10;

        cnt++;
        n = n / 10;
    }

    return cnt;
}

int main() {
    int n;
    cin >> n;

    cout << countDigits(n) << endl;

    return 0;
}