#include<iostream>
using namespace std;
int main(){
    int arr[6] = {2, 4, 6, 8, 10, 12};
    int target = 10, n=6;
    bool flag = 0;
    for (int i=0; i<n; i++){
        if (arr[i]== target){
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        cout << "Element found in the array" << endl;
    }
    else{
        cout << "Element not found in the array" << endl;
    }
    return 0;

}