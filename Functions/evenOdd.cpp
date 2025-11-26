#include<iostream>
using namespace std;
// int isEven(int n){
//     if(n%2==0){
//         return 1; // Even
//     }
//     else{
//         return 0; // Odd
//     }
// }

//******************************************************************************METHOD 2 BITWISE OPERATOR**************************************************************************************** */

int isEven(int n){
    return (n & 1) == 0; // Even
}

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    bool res= isEven(num);
    cout<<"The number is:"<<(res ? "Even" : "Odd")<<endl;
    return 0;
}