#include <iostream>
using namespace std;

int main () {
    int arr[3][3] = { {2, 8, 7}, {4, 3, 5}, {7, 9, 1} };
    int row = 3;
    int col = 3;

    for (int i = 0; i < row; i++) {
        for (int j=i; j<col; j++) {
            swap (arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0; 
}