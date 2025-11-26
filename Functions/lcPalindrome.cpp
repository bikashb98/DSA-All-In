#include <iostream>
#include<limits.h>
using namespace std;

bool isPalindrome(int x) {
    int rem = 0, ans = 0;
    int original = x;
    if (x<0){
    return false;
    }
    while(x){
        if (x>INT_MAX/10){
            return false;
        }
        rem = x%10;
        ans = ans * 10 + rem;
        x = x/10;

    }

  return (ans == original)? true : false;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool res = isPalindrome(n);
    cout<<res<<endl;
    return 0;
}