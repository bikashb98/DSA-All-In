#include<iostream>
using namespace std;
int checkMember(int n){
    int f1 = 1, f2 = 1;
    if(n==0 && n==1){
        return true;
    }
    else{
        while(1){
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if(temp==n){
                return true;
            }
            else if(temp>n){
                return false;
            }
        }
    }

}

int main(){
    int n;
    cin>>n;
    bool res = checkMember(n);
   cout<<(res? "Member" : "Not Member")<<endl;
    return 0;
}
// checks if the number is a part of fibonacci series 0, 1, 1, 2, 3, 5, 85, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987. Don't assume if you input 235813 you will get true result. as 2,3,5,8,13 are part of fibonacci series but 235813 is not.