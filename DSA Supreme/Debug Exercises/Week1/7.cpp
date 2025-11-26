// 7. Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
   1
  232
 34543
4567654
*/
#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int i=1;
    int n = 2*no;
    while(i<=(no)){
        int gaps = no-i, k=1;
        int j = i;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int z = i;
        while(z>=1){
            cout<<j;
            j = j + 1;
            z = z - 1;
        }

        j = j - 1;
        z = i-1;
        while(z>=1){
            j = j - 1;
            cout<<j;
            z = z - 1;
        }
        k = 1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}