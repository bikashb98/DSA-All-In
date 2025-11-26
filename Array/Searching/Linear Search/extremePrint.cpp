#include<iostream>
using namespace std;
void reverseArray(int arr[], int size){
    int start =0;
    int end = size-1;
    while(start<=end){
        if (start == end){
            cout<<arr[start]<<" ";
        }
        else{cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        }
        start++;
        end--;
        
    }
   
}

int main(){
    int arr[6] = {10,20,30,40,50,60};
    int size = 6;
    reverseArray(arr, size);
    return 0;

}