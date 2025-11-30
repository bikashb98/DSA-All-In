#include <iostream>
using namespace std;


void rowWiseSum (int arr[][4], int rows, int cols) {

    

    for (int i = 0; i<rows; i++) {
        int sum = 0;
        for (int j = 0; j<cols; j++) {
            sum += arr[i][j];
            
        }
        cout<<"The sum of " << i <<"th row is " << sum << endl;
    }
}
int main() {
    int arr[3][4] = { {10, 20, 5, 7}, 
                      {2, 4, 6, 8},
                      {10, 15, 15, 10} };
    int row = 3;
    int col = 4;
    
    rowWiseSum (arr, row, col);
    return 0;

   
}