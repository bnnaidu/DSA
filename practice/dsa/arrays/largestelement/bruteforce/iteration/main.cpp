#include <iostream>
#include <optional>
#include <vector>

std::optional<int> findLargest(std::vector<int> &arr) {
  if (arr.empty()) {
    return std::nullopt;
  }
  int largest = arr[0];
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] > largest)
      largest = arr[i];
  }
  return largest;
}

int main() {
  std::vector<int> arr1{10, 25, 7, 45, 32};
  std::vector<int> arr2{};
  std::optional<int> result1 = findLargest(arr1);
  if (result1.has_value()) {
    std::cout << "largest value: " << result1.value() << std::endl;
  } else {
    std::cout << "arr1 is empty" << std::endl;
  }

  std::optional<int> result2 = findLargest(arr2);
  if (result2.has_value()) {
    std::cout << "largest value: " << result2.value() << std::endl;
  } else {
    std::cout << "arr2 is empty" << std::endl;
  }
  return 0;
}