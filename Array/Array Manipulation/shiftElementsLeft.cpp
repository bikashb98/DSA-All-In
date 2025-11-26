#include<iostream>
using namespace std;
void shiftElement(int arr[], int size){
    int temp =arr[0];
    for(int i=0; i<size; i++){
        arr[i]= arr[i+1];
    }
    arr[size-1] = temp;
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