#include<iostream>
using namespace std;
void printPair(int arr[], int b)
{
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")" <<"," ;
        }
        cout<< endl;
    }
}

int main(){
    int n;
    cout <<"Enter the number of elements in the array: ";
    cin >> n;
    cout<< "Enter the elements of the array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The pairs are: " << endl;
    printPair(arr, n);
    return 0;
}