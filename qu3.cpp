#include <iostream>
using namespace std;

int absoluteValue(int n) {
    if (n < 0) return -n;
    return n;
}

int main() {
    int a[3], b[3], sad = 0;
    cout << "Enter 3 elements for first array:\n";
    for (int i = 0; i < 3; i++) cin >> a[i];
    cout << "Enter 3 elements for second array:\n";
    for (int i = 0; i < 3; i++) cin >> b[i];
    for (int i = 0; i < 3; i++)
        sad += absoluteValue(a[i] - b[i]);
    cout << "Sum of Absolute Differences (SAD) = " << sad << endl;
}
