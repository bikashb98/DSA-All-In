#include<iostream>
using namespace std;
// void sortZeroesAndOnes(int arr[], int arrSize){
//     int zeroCount = 0;
//     int oneCount = 0;
//     int i;
//     for ( i =0; i< arrSize; i++){
//         if (arr[i] == 0){
//              zeroCount++;
//             }
//         else 
//         {
//             oneCount++;
//         }
//     }
//     for (i = 0; i<zeroCount; i++){
//         arr[i] = 0;
//         cout<< arr[i] << " ";
//     }
    
//     for (int j=i; j<arrSize; j++){
//         arr[j] = 1;
//         cout<< arr[j] << " ";
//     }

// }


//**********************************************************************************************METHOD 2 TWO POINTER********************************************************************************************************** */

void sortZeroesAndOnes(int arr[], int arrSize){
    int left = 0;
    int right = arrSize-1;
    while(left < right){
        if(arr[left] == 0){
            left++;
        }
         if (arr[right] == 1){
            right--;
        }
        if(arr[left]==1 && arr[right]==0){
            swap(arr[left], arr[right]);
        }
        left ++;
        right--;
    }
    for (int i = 0; i<arrSize; i++){
        cout<< arr[i] << " ";
    }
}
int main(){
    int n;
    
    cout<<"Enter the number of elements in the array: ";
    cin>> n;
    int a[n];
    cout<< "Enter the 0s & 1s of the array : ";
    for (int i =0; i<n; i++){
        cin>> a[i];
    }
    cout<< "The sorted array is: ";
    sortZeroesAndOnes(a, n);
    cout<< endl;
    return 0;
}