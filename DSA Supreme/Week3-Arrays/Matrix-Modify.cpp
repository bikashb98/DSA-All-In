#include <iostream>
using namespace std;

int main () {
    int arr[] = {23, -7, -10, -11, 40, 60};
    int i = 0;
    int j = 0;
    int size = 6;
    while (i < size) {
        if (arr[i] < 0) {
            swap (arr[i], arr[j]);
            i++; 
            j++;
        }
        else {
            i++;
        }
    }

    cout << "Array after modification: " << endl;
    for (int i = 0; i< size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}