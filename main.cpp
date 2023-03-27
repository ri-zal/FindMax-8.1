#include <iostream>
using namespace std;

int main() {
   const int SIZE = 10;
   int arr[SIZE];
   int maxItem;
   
   for (int i = 0; i < SIZE; i++) {
      cin >> arr[i];
   }
   
   maxItem = arr[0];
   
   for (int i = 0; i < SIZE; i++) {
      if (arr[i] > maxItem) {
         maxItem = arr[i];
      }
   }
   
   cout << maxItem;
   
   return 0;
}
