#include<iostream>
using namespace std;
int main(){
    int n ;;
    cout<<"Enter the total number of rows:";
    cin>>n;
    for(int i=0; i<n; i++){
        char ch;
        for (int j=0; j<i+1; j++){
         ch= j+1+'A'-1;
            cout<< ch;
           
        }
    for(char alphabet=ch; alphabet>'A'; ){
       alphabet=alphabet-1;
        cout<<alphabet;
      
    }
    cout<<endl;
}
    }
    