#include <iostream>
using namespace std;

void extremePrint (int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        if (start == end) {
            cout << arr[start] << " ";
        }
        else { 
            cout << arr[start] << " " << arr[end] << " ";
        }
        start++;
        end--;
    }
}

int main () {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5; 
    extremePrint(arr, size);
    cout << endl;
    return 0;
}