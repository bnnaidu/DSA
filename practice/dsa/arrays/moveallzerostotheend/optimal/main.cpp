#include <algorithm>
#include <iostream>
#include <vector>

void moveAllZerosToEnd(std::vector<int> &arr) {
  size_t j = 0;
  for (size_t i = 0; i < arr.size(); i++) {
    if (arr[i] != 0) {
      std::swap(arr[i], arr[j]);
      j++;
    }
  }
}

int main() {
  std::vector<int> arr = {0, 1, 0, 3, 12};
  moveAllZerosToEnd(arr);
  for (size_t i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}