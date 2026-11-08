#include <iostream>
#include <vector>

void moveAllZerosEnd(std::vector<int> &arr) {
  std::vector<int> temp;
  for (size_t i = 0; i < arr.size(); i++) {
    if (arr[i] != 0) {
      temp.push_back(arr[i]);
    }
  }

  size_t zeros = arr.size() - temp.size();
  for (size_t i = 0; i < zeros; i++) {
    temp.push_back(0);
  }
  arr = temp;
}

int main() {
  std::vector<int> arr = {0, 1, 0, 3, 12};
  moveAllZerosEnd(arr);
  for (int i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}