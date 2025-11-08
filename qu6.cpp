#include <iostream>
#include <cmath>
using namespace std;

int isArmstrong(int n) {
    int sum = 0, temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int n;
    cout << "Enter a 3-digit number: ";
    cin >> n;
    if (isArmstrong(n))
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;
}
