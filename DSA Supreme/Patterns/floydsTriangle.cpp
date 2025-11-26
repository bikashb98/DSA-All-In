#include<iostream>
using namespace std;
int main(){
    int n, num=0;
    cout<<"Enter the total number of rows:";
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            num= num+1;
            cout<<num<<" ";

        }
        cout<<endl;
     }
    }