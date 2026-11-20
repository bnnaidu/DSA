#include <iostream>

void moveZeros(int arr[], int n) {
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      j++;
    }
  }
}

void display(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
  int n = 8;
  moveZeros(arr, n);
  display(arr, n);

  return 0;
}