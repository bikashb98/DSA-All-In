#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout << "Enter 5 elements of the array: ";
    for (int i=0; i<5; i++){
        cin >> arr[i];
    }
    int zeros=0, ones=0;
    for (int i=0; i<5; i++){
        if (arr[i] == 0){
            zeros++;
        }
        else if (arr[i] == 1){
            ones++;
        }
    }
    cout<< "Number of 0's: " << zeros << endl;
    cout<< "Number of 1's: " << ones << endl;
    
return 0;   
}