#include <iostream>
using namespace std;


// TRACING PROBLEM: LEFT --> 
// output: 0, 6, 2, 4, 3, 5, 1 (every number on a new line)

// RIGHT --> 
// output: 76
int main() {
    int n, i, j;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
        cout << "Enter " << n << " numbers:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
        int sum = 0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "\nSum of all elements: " << sum << endl;
        int max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Maximum element: " << max << endl;
        int min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Minimum element: " << min << endl;
        float average = (float)sum / n;
    cout << "Average of all elements: " << average << endl;
        cout << "Numbers above average: ";
    for(i = 0; i < n; i++) {
        if(arr[i] > average) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
        cout << "Array in reverse order: ";
    for(i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
        int count = 0;
    int firstElement = arr[0];
    for(i = 0; i < n; i++) {
        if(arr[i] == firstElement) {
            count++;
        }
    }
    cout << "Number of occurrences of the first element (" << firstElement << "): " << count << endl;
    
    return 0;
}