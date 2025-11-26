#include<iostream>
using namespace std;
void count(int n){
    int count =1;
    while(count<=n){
        cout<<count<<endl;
        count++;
    }
 
}

int main(){
    int n;
    cout<<"Enter the number till which you want to count: ";
    cin>>n;
    count(n);
    return 0;
}