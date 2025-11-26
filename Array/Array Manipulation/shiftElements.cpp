#include<iostream>
using namespace std;
void shiftElement(int arr[], int size){
    int temp =arr[size-1];
    for(int i=size-1; i>0; i--){
        arr[i]= arr[i-1];
    }
    arr[0] = temp;
    for (int i = 0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;

}

int main(){
    int n;
    
    cout<<"Enter the number of elements in the array: ";
    cin>> n;
    int a[n];
    cout<< "Enter the elements of the array : ";
    for (int i =0; i<n; i++){
        cin>> a[i];
    }
    cout<< "The shitfted array is: ";
    shiftElement(a, n);
    cout<< endl;
    return 0;
}