#include<iostream>
using namespace std;
void shiftElement(int arr[], int size, int k){
    int temp[k];

    for (int i = 0; i<k; i++){
        temp[i] = arr[size-k+i];
    }
    for(int i=size-1; i>0; i--){
        arr[i]= arr[i-k];
    }
    for (int i = 0; i<k; i++){
        arr[i] = temp[i];
    }
    for (int i = 0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;

}

int main(){
    int n, k;
    
    cout<<"Enter the number of elements in the array: ";
    cin>> n;
    int a[n];
    cout<< "Enter the elements of the array : ";
    for (int i =0; i<n; i++){
        cin>> a[i];
    }
    cout<<" Enter the nubmer of elements to shift: ";
    cin>> k;
    cout<< "The shitfted array is: ";
    shiftElement(a, n, k);
    cout<< endl;
    return 0;
}