#include <algorithm>
#include <iostream>

int main() {
  int arr[] = {10, 25, 7, 45, 32};
  int n = sizeof(arr) / sizeof(arr[0]);
  std::sort(arr, arr + n);

  std::cout << "largest element: " << arr[n - 1] << std::endl;
  return 0;
}