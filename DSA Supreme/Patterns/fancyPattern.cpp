#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the total number of rows:";
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<(2*n)-i-2; j++){
            cout<<"*";
        }
        for (int j=0; j<i+1; j++){
            if(j==i){
                cout<<i+1;
            }
            else{ 
            cout<<i+1<<"*";
        }
    }
    for (int j=0; j<(2*n)-i-2; j++){
        cout<<"*";
    }
    cout<<endl;
    }
}