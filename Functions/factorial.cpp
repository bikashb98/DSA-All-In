#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = n; i>1; i--){
        fact *= i;
    }
    return fact; 

}

int main(){
    int n;
    cout<<"Enter the number you want the factorial of: ";
    cin>>n;
    int res = factorial(n);
    cout<<"Factorial of "<<n<<" is: "<<res<<endl;
    return 0;
}