#include<iostream>
using namespace std;

bool solve(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if (arr[i]== target){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[5] = {2, 4, 6, 8, 10};
    int target = 10, size=5;
   bool ans = solve(arr,size, target);
    if (ans == 1){
        cout << "Element found in the array" << endl;
    }
    else{
        cout << "Element not found in the array" << endl;
    }

    return 0;
}