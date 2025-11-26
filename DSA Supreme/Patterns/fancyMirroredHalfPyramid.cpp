// Total number of rows given in input does not match the output
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total number of rows:";
    cin>>n;
    n=n/2;
    for(int i=0; i<n; i++){
        for(int j=0; j<(2*i)+1; j++){
            if (j%2==0){
                cout<<i+1;
        }
            else{
                cout<<"*";
            }
    }
    cout<<endl;
    }
    for(int i=0; i<n-1; i++){
        for (int j=0; j<n-(2*i)+1; j++){
            if (j%2==0){
                cout<<n-i-1;
        }
            else{
                cout<<"*";
            }
    }
    cout<<endl;
    }
}