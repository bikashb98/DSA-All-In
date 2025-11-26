#include<iostream>
using namespace std;
// int max(int a, int b, int c){
//     if(a>=b && a>=c)
//         return a;
//     else if (b>=a && b>=c)
//         return b;
//     else 
//         return c;
// }

// *******************************************************************METHOD2 USING MAX FUNCTION*******************************************************************

int maximum(int a, int b, int c){
    int ans1 = max(a, b);
    int ans2 = max(ans1, c);
    return ans2;
}
int main(){
    int a, b, c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    int res = maximum(a, b, c);
    cout<<"Max is: "<<res<<endl;
    return 0;
}