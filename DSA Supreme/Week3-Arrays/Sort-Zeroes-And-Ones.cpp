#include <iostream>
#include <algorithm>
using namespace std;

// int main() {
//     int arr[] = {0, 1, 0, 1, 1, 0, 0, 1};
//     int countzeroes = 0;
//     int countones = 0;
//     int size = 8;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == 0) {
//             countzeroes++;
//         } else {
//             countones++;
//         }
//     }
//     for (int i = 0; i < countzeroes; i++) {
//         arr[i] = 0;
//     }
//     for (int i = countzeroes; i < size; i++) {
//         arr[i] = 1;
//     }
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// ------------------------------------------------------------------TWO POINTER METHOD ---------------------------------------------------------------------

// int main () {
//     int arr[] = {0, 1, 0, 1, 1, 0, 0, 1};
//     int size = 8;
//     int left = 0; 
//     int right = size-1;

//     while (left <= right) {
//         if (arr[left] > arr[right] ) {
//             swap (arr[left], arr[right]);
//         }
//         if (arr[right] == 0 && arr[right-1] == 1){
//             arr[left + 1] = arr[right];
//             arr[right] = 1;
//         }
//         left++;
//         right--;
//     }
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// ------------------------------------------------------------SORT FUNCTION-----------------------------------------------------

int main () {
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 1};
    int size = 8;
    sort (arr, arr + size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}