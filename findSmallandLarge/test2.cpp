#include <iostream>
using namespace std;

int main() {

    int n;

    // Prompt the user to enter a size for the array
    cout << "Enter a size for the array: ";
    cin >> n;

    int arr[n];

    // prompt the user to enter values into the array
    cout << "Enter value into the array: " ;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

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

    cout << "The largest: " << largest << endl;
    cout << "The Smallest: " << smallest << endl;

    return 0;
}