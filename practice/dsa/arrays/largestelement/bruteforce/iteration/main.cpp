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
  // std::vector<int> arr{10, 25, 7, 45, 32};
  std::vector<int> arr{};
  std::optional<int> result = findLargest(arr);
  if (result.has_value()) {
    std::cout << "largest value: " << result.value() << std::endl;
  } else {
    std::cout << "Array is empty" << std::endl;
  }
  return 0;
}