#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the total number of rows: ";
    cin >> n;
    int upperRows, lowerRows;
    if(n%2 ==0){
        upperRows = n/2;
        lowerRows = n/2;
    }
    else{
        upperRows = n/2 + 1;
        lowerRows = n/2;

    } 
    for(int i = 0; i < upperRows; i++){
        for(int j = 0; j < upperRows-i-1; j++){
            cout << " ";
        }
        for(int j = 0; j < i + 1; j++){
            if(j == 0 || j == i){
                cout << "* ";
            }
            else{
                cout << "  ";
            } 
        }
        cout << endl;
    }
    for(int i = 0; i < lowerRows; i++){
        int space =(n%2 != 0) ? i+1 : i;
        for(int j = 0; j < space; j++){
            cout << " ";
        }
        for(int j = 0; j < lowerRows-i; j++){
            if(j == 0 || j == lowerRows-i-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
            
        }
        cout << endl;
    }
}