#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of elements
    
    int arr[n]; // Declare an array of size n

    // Read n elements into the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print the array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
