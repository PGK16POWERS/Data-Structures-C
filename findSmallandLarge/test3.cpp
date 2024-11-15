#include <iostream>
using namespace std;


int main() {
    int n;

    // Prompt the user to enter a size for the array
    cout << "Enter a size: ";
    cin >> n;

    int arr[n];

    // Enter values into the array
    cout << "Enter values: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize large and smallest value
    int largest = arr[0];
    int smallest = arr[0];

    // Find Smallest and Largest values
    for (int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Largest value: " << largest;
    cout << "Smallest value: " << smallest;

    return 0;
}
