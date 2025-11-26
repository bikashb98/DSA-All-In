#include<iostream>
using namespace std;
int isPrime(int n){
    for (int i = 2; i<n; i++){
        if (n%i ==0){
            return 0;
        }
    }
 return 1;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool res = isPrime(n);
    cout<<(res ? "Prime" : "Not Prime")<<endl;
    return 0;
}