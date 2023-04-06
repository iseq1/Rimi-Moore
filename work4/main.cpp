#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "Enter the size of the array: ";
    cin >> k;

    int* arr = new int[k];
    cout << "Enter " << k << " numbers: ";

    for(int i=0; i<k; i++) {
        cin >> arr[i];
    }

    int inv_count = 0;

    for(int i=0; i<k; i++) {
        for(int j=i+1; j<k; j++) {
            if(arr[j] < arr[i]) {
                inv_count++;
            }
        }
    }

    cout << "Number of inversions: " << inv_count << endl;
    return 0;
}