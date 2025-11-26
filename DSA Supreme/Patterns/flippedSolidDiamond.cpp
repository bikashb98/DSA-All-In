// This code will only work for even number of rows to make it work for odd number of rows use if else statement just like you have used in the diamond pattern.


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total number of rows: ";
    cin>>n;
    n=n/2;
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i; j++){
            cout<<"*";
            }
        for (int j=0; j<(2*i)+1; j++){
            cout<<" ";
            }
        for (int j=0; j<n-i; j++){
            cout<<"*";
            }
        cout<<endl;
        }
        for (int i=0; i<n; i++){
            for (int j=0; j<i+1; j++){
                cout<<"*";
                }
            for (int j=0; j<(2*n)-(2*i)-1; j++){
                cout<<" ";
                }
            for (int j=0; j<i+1; j++){
                cout<<"*";
                }
            cout<<endl;
            }
    }
