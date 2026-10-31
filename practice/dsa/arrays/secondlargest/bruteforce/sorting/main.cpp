#include <algorithm>
#include <iostream>
#include <optional>
#include <vector>

std::optional<int> findSecondLargest(const std::vector<int> &arr) {
  if (arr.size() < 2) {
    return std::nullopt;
  }
  std::vector<int> temp = arr;
  std::sort(temp.begin(), temp.end());

  int largest = temp[temp.size() - 1];
  for (int i = static_cast<int>(temp.size()) - 2; i >= 0; i--) {
    if (temp[i] < largest) {
      return temp[i];
    }
  }
  return std::nullopt;
}

int main() {
  std::vector<int> arr = {10, 50, 20, 50, 40};
  std::vector<int> arr2 = {10, 10, 10};
  std::optional<int> result = findSecondLargest(arr);
  if (result.has_value()) {
    std::cout << "second largest: " << result.value() << std::endl;
  } else {
    std::cout << "second largest does not exist\n";
  }

  std::optional<int> result2 = findSecondLargest(arr2);
  if (result2.has_value()) {
    std::cout << "second largest: " << result2.value() << std::endl;
  } else {
    std::cout << "second largest does not exist\n";
  }
  return 0;
}