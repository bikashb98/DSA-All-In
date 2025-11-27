// #include <iostream>
// #include <limits.h>
// using namespace std;

// int findMinimumInArray(int arr[], int size) {
//   int minAns = INT_MAX;
//   for (int i = 0; i < size; i++) {
//     if (arr[i] < minAns) {

//       minAns = arr[i];
//     }
//   }

//   return minAns;
// }

// int main() {
//   int arr[] = {7, 3, 5, 8, 9, 2, 20, 15, 10};
//   int size = 7;
//   int minimum = findMinimumInArray(arr, size);
//   cout << "Minimum number is: " << minimum << endl;
//   return 0;
// }

// --------------------------------------------------------------- ALTERNATIVE APPROACH using min() ------------------------------------------------------------------------------------------------------


#include <iostream>
#include <limits.h>

using namespace std;

int findMinimumInArray(int arr[], int size) {
  int minAns = INT_MAX;
  for (int i = 0; i < size; i++) {
    minAns = min(minAns, arr[i]);
  }
  return minAns;
}

int main() {
  int arr[] = {7, 3, 5, 8, 9, 2, 20, 15, 10};
  int size = 7;
  int minimum = findMinimumInArray(arr, size);
  cout << "Minimum number is: " << minimum << endl;
  return 0;
}
