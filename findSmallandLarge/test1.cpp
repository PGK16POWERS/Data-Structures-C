#include <iostream>
using namespace std;

int main() {

    int n;

    // Prompt the user to enter size of array    
    cout << "Enter the size of the array: ";
    cin >> n; 

    int arr[n];

    // prompt user to enter values into the array
    cout << "Enter values into the array: " << endl;
    for (int i = 0; i < n ; i++) {
        cin >> arr[i];
    }

    cout << "The array: " << arr[1];

    return 0;
}