#include<iostream>
#include<limits.h>
using namespace std;
int reverseInteger(int n){
    int ans =0, rem =0;
    bool isNegative = false;
    if (n<0){
        isNegative = true;
        n = -n;
    }
    if(n<=0){
        return 0;
    }
    while (n>0){
        if(ans>INT_MAX/10){
            return 0;
        }
        rem = n%10;
        ans = ans*10 + rem;
        n = n/10;
    }
    return isNegative? -ans : ans;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int res = reverseInteger(n);
    cout<<"Reversed integer is: "<<res<<endl;
    return 0;
}