#include <iostream>

int findLargestElement(int *arr, int size) {
  int largest = arr[0];
  for (int i = 1; i < size; i++) {
    if (largest < arr[i])
      largest = arr[i];
  }
  return largest;
}

int main() {
  int arr[] = {10, 25, 7, 45, 32};
  std::cout << findLargestElement(arr, 5) << std::endl;
  return 0;
}