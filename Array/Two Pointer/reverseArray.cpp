#include<iostream>
using namespace std;
// void reverseArray(int arr[], int size){
//     int start =0;
//     int end = size-1;
//     while(start<end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
//     for (int i=0; i<size; i++){
//         cout<<arr[i]<< " ";
//     }
// }
//****************************************************************************METHOD 2 FOR LOOP******************************************************************************************* */

void reverseArray(int arr[], int size){
   for(int start=0, end = size-1; start<end; start++, end--){
        swap(arr[start], arr[end]);
   }
    for (int i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }
}

int main(){
    int arr[6] = {10,20,30,40,50,60};
    int size = 6;
    reverseArray(arr, size);
    return 0;

}