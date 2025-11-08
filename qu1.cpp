#include <iostream>
using namespace std;

int oddOrEven(int n) {
    if (n % 2 == 0) return 0;
    return 1;
}

int main() {
    int arr[10], evenCount = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        if (oddOrEven(arr[i]) == 0)
            evenCount++;
    }
    cout << "Number of even values = " << evenCount << endl;
}
