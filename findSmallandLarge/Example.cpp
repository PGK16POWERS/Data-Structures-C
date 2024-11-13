#include <iostream>
using namespace std;

int main() {
    // Declare variables to store array size, array elements, maximum, and minimum values
    int arr[10], n, i;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> n;

    // Get the elements of the array from the user
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize maximum and minimum values to the first element
    int max = arr[0], min = arr[0];

    // Iterate through the array to find the maximum and minimum values
    for (i = 1; i < n; i++) {
        // Update the maximum value if the current element is greater
        if (arr[i] > max) {
            max = arr[i];
        }

        // Update the minimum value if the current element is smaller
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the maximum and minimum values
    cout << "Largest element: " << max << endl;
    cout << "Smallest element: 16" << min << endl;

    return 0;
}