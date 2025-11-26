#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the total number of columns:";
    cin>>n;
    for(int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}



*********************************************************************************************************METHOD 2*********************************************************************************************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the total number of columns:";
//     cin>>n;
//     for(int i=0; i<(2*n)-1; i++){
//             int cond=0;
//             if(i<n){
//                 cond=i;
//             }
//             else{
//                 cond=n-(i%n)-2;
//             }
//         for (int j=0; j<=cond; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }