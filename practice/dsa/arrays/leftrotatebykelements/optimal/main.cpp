#include <algorithm>
#include <iostream>
#include <vector>

void reverseRange(std::vector<int> &arr, int left, int right) {
  while (left < right) {
    std::swap(arr[left], arr[right]);
    left++;
    right--;
  }
}

void leftRotate(std::vector<int> &arr, int k) {
  int n = static_cast<int>(arr.size());
  if (n == 0)
    return;
  k = k % n;
  reverseRange(arr, 0, k - 1);
  reverseRange(arr, k, n - 1);
  reverseRange(arr, 0, n - 1);
}

int main() {
  std::vector<int> arr = {10, 20, 30, 40, 50};
  leftRotate(arr, 2);
  for (size_t i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}