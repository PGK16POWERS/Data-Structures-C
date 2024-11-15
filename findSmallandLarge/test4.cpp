#include <iostream>
using namespace std;

int main() {
    int n;

    // Initialize size of the array
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    // Enter values into the array;
    cout << "Enter values: "<< endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 

    // Declare and initialize 
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;

    return 0;
}