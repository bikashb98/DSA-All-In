#include<iostream>
using namespace std;
int sum(int a, int b, int c) {
    return a + b + c;
}

int main(){
    int x, y, z;
    cout<<"Enter three numbers:";
    cin>>x>>y>>z;
    int res = sum(x, y, z);
    cout<<"Sum is: "<<res<<endl;
    return 0;

}