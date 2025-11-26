#include<iostream>
using namespace std;

int sumOfOdd(int n){
    int sum = 0;
    for (int i=1; i<=n; i++){
        if (i%2 != 0)
            sum += i;
    }
    return sum;
}

int main(){
    int num;
    cout << "Enter the number upto which you want the sum of odd numbers: ";
    cin>> num;
    int res = sumOfOdd(num);
    cout << "Sum of odd numbers upto " << num << " is: " << res << endl;
    return 0;
}