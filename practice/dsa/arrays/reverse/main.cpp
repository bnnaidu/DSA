#include <iostream>

void reverse(int arr[], int n) {
  int arrB[n] = {0};
  for (int i = n - 1, j = 0; i >= 0; i--, j++) {
    arrB[j] = arr[i];
  }
  for (int i = 0; i < n; i++) {
    arr[i] = arrB[i];
  }
}

void reverse2(int arr[], int n) {
  int i = 0;
  int j = n - 1;
  while (i < j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
}

void display(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  int arr[] = {2, 3, 4, 5, 6};
  int n = 5;
  reverse(arr, n);
  display(arr, n);
  reverse2(arr, n);
  display(arr, n);
  return 0;
}