#include <iostream>
#include <vector>

bool isSorted(const std::vector<int> &arr) {
  for (size_t i = 1; i < arr.size(); i++) {
    if (arr[i - 1] > arr[i])
      return false;
  }
  return true;
}

int main() {
  std::vector<int> arr = {10, 20, 20, 30, 40};
  if (isSorted(arr))
    std::cout << "arr is sorted\n";
  else
    std::cout << "arr is not sorted\n";

  std::vector<int> arr2 = {10, 20, 20, 30, 25};
  if (isSorted(arr2))
    std::cout << "arr2 is sorted\n";
  else
    std::cout << "arr2 is not sorted\n";

  std::vector<int> arr3 = {};
  if (isSorted(arr3))
    std::cout << "arr3 is sorted\n";
  else
    std::cout << "arr3 is not sorted\n";

  return 0;
}