#include <iostream>

int binarySearch(int arr[], int l, int h, int key) {
  while (l <= h) {
    int mid = (l + h) / 2;
    if (key == arr[mid]) {
      return mid;
    } else if (key < arr[mid]) {
      h = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  return -1;
}

int rBinarySearch(int arr[], int l, int h, int key) {
  int mid;
  if (l <= h) {
    mid = (l + h) / 2;
    if (key == arr[mid]) {
      return mid;
    } else if (key < arr[mid]) {
      return rBinarySearch(arr, l, mid - 1, key);
    } else {
      return rBinarySearch(arr, mid + 1, h, key);
    }
  }
  return -1;
}

int main() {
  int arr[] = {2, 3, 4, 5, 6};
  int n = 5;
  std::cout << binarySearch(arr, 0, n - 1, 5) << std::endl;
  std::cout << rBinarySearch(arr, 0, n - 1, 5) << std::endl;
  return 0;
}