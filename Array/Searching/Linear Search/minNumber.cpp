#include<iostream>
#include<limits.h>
#include<algorithm> // for min function
using namespace std;

// int checkMin(int arr[], int size){
//     int min =arr[0];
//     for (int i=0; i<size; i++){
//         if (arr[i]<min){
//             min = arr[i];
//         }
//     }
//     return min;
// }
//**********************************************************************************METHOD 2 USING INT_MAX/INT_MIN************************************************************************
// int checkMin2(int arr[], int size){
//     int min =INT_MAX; // Predefined function defiend in limits.h gives the maximum value of int so no number can be bigger than this
//     for (int i=0; i<size; i++){
//         if (arr[i]<min){
//             min = arr[i];
//         }
//     }
//     return min;
// }
// ****************************************************************************************METHOD 3 USING min(a,b) FUNCTION**********************************************************
int checkMin3(int arr[], int size){
    int minAns=arr[0]; 
    for (int i=1; i<size; i++){
      minAns = min(arr[i], minAns); // Predefined function in algorithm header file
    }
    return minAns;
}
int main(){
    int arr[5]= {5,2,7,-9,1};
    int size = 5, res;
     res= checkMin3(arr, 5);
    cout<< "Minimum element in the array is: " << res << endl;
    return 0;
}