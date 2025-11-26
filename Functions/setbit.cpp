#include<iostream>
using namespace std;

int setBit(int n, int k){
   int mask = 1<<k;
   int ans = n | mask;
   return ans;
}

int main (){
    int n, k;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter the bit position to set: ";
    cin>>k;
    int res = setBit(n, k);
    cout<<"Number after setting bit "<<k<<" is: "<<res<<endl;
    return 0;
}