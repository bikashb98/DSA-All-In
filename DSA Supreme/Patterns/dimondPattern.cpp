//This code behaves abnormally for odd numbers
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n, num;
//     cout << "Enter the total number of rows: ";
//     cin >> num;
//     n = (num/2);
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n-i-1; j++){
//             cout << " ";
//         }
//         for(int j = 0; j < i + 1; j++){
//             cout  << "* ";
//         }
//         cout << endl;
//     }
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i; j++){
//             cout << " ";
//         }
//         for(int j = 0; j < n-i; j++){
//             cout  << "* ";
//         }
//         cout << endl;
//     }
// }




//************************************************************************************************OPTIMISED CODE*************************************************************************************************************




#include<iostream>
using namespace std;

int main(){
    int n, num;
    cout << "Enter the total number of rows: ";
    cin >> num;
    
    int upperRows, lowerRows;
    
    // Handle odd vs even inputs
    if(num % 2 == 0) { // even
        upperRows = num / 2;
        lowerRows = num / 2;
    } else { // odd
        upperRows = num / 2 + 1;
        lowerRows = num / 2;
    }
    
    // Upper half of diamond
    for(int i = 0; i < upperRows; i++){
        for(int j = 0; j < upperRows-i-1; j++){
            cout << " ";
        }
        for(int j = 0; j < i + 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    // Lower half of diamond
    for(int i = 0; i < lowerRows; i++){
        int startSpace = (num % 2 != 0) ? i + 1 : i;
        for(int j = 0; j < startSpace; j++){
            cout << " ";
        }
        for(int j = 0; j < lowerRows-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}