#include <bits/stdc++.h>
using namespace std;

// perform select sort
void selectSort(int array[], int size) {

  // finish your homework here

}


// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}


int main() {
  int data[] = {1, 3, 5, 4, 2};
  
  // find array's length
  int size = sizeof(data) / sizeof(data[0]);
  
  selectSort(data, size);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, size);
}
