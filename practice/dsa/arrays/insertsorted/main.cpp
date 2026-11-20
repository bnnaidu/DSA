#include <iostream>

void insertSorted(int arr[], int n, int val) {
  int i = n - 1;
  while (i >= 0 && arr[i] > val) {
    arr[i + 1] = arr[i];
    i--;
  }
  arr[i + 1] = val;
}

bool isSorted(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    if (arr[i] > arr[i + 1])
      return false;
  }
  return true;
}

void display(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  int arr[10] = {10, 20, 30, 40, 50};
  int n = 5;
  insertSorted(arr, n, 45);
  std::cout << isSorted(arr, n) << std::endl;
  display(arr, n + 1);

  return 0;
}