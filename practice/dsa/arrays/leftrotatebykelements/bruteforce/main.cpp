#include <iostream>
#include <vector>

void leftRotateByOne(std::vector<int> &arr) {
  int temp = arr[0];
  for (size_t i = 0; i < arr.size() - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[arr.size() - 1] = temp;
}

void leftRotate(std::vector<int> &arr, int k) {
  if (arr.empty())
    return;
  k = k % static_cast<int>(arr.size());
  for (int i = 0; i < k; i++) {
    leftRotateByOne(arr);
  }
}

int main() {
  std::vector<int> arr = {10, 20, 30, 40, 50};
  leftRotate(arr, 8);
  for (size_t i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}