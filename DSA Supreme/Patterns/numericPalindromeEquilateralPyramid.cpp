#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total number of rows:";
    cin>>n;
    for (int i=0; i<n; i++){
        int num;
        for (int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for (int j=0; j<i+1; j++){
            num= j+1;
            cout<<num;
        }
        for (int rev=num; rev>1; ){
           rev=rev-1;
            cout<<rev;
        }
        cout<<endl;
    }
   
}
//**********************************************************************************************METHOD 2********************************************************************************************************** */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the total number of rows:";
//     cin >> n;
//      int k = n;
//     for (int i = 0; i < n; i++) {
//    int c=1;
//         for (int j = 0; j <k; j++) {
//              if(j<n-i-1){
//                 cout << " ";
//              }
//              else if(j<n){
//                 cout << c;
//                c++;
//              }
//             else if (j==n){
//              c=c-2;
//              cout<<c;
//              c--;
//             }
//             else { 
//                  cout<<c;
//                   }
//             }
//         cout << endl;
//         k++;
//     }
//   }