#include <iostream>
#include <vector>

int findSmallest(std::vector<int> arr) {
  int smallest = arr[0];
  for (size_t i = 1; i < arr.size(); i++) {
    if (arr[i] < smallest)
      smallest = arr[i];
  }
  return smallest;
}

int main() {
  std::vector<int> arr = {30, 10, 50, 20, 10, 40};
  std::cout << "smallest: " << findSmallest(arr) << std::endl;
  return 0;
}