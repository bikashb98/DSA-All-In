// #include <iostream>
// using namespace std;

// void reverseArray (int arr[], int size) {
    
//     for (int start= 0, end = size - 1; start <= end; start++, end--) {
//          swap(arr[start], arr[end]);
        
//     }
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
// }

// int main () {
//     int arr [] = {10, 20, 30, 40, 50};
//     int size = 5;
//     reverseArray(arr, size);
//     return 0;
// }

// ---------------------------------------------------------------- ALTERNATIVE APPROACH ------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

void reverseArray (int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp = 0;
    while (start < end) {
        temp = arr[start];
        arr[start] =  arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
}
    cout << endl;
}

int main () {
    int arr [] = {10, 20, 30, 40, 50};
    int size = 5; 

    reverseArray (arr, size);
    return 0;
}