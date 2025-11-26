/*
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int k=1;
        while( k<=n-i){
            int r = k+1;
            cout<<k;
            k++;
        }
       k=1;
        while(k<=2*i){
            cout<<"*";
            k++;
        }
        k=n-i;
        // k = 2;
        while(k){
           
            cout<<k;
            k--;
        } 
       
        i++;
        cout<<"\n";
    }
}