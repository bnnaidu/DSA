#include <algorithm>
#include <iostream>
#include <optional>
#include <vector>

std::optional<int> findSecondSmallest(const std::vector<int> &arr) {
  if (arr.size() < 2)
    return std::nullopt;
  std::vector<int> temp = arr;

  std::sort(temp.begin(), temp.end());
  int smallest = temp[0];

  for (int i = 1; i < temp.size(); i++) {
    if (arr[i] > smallest)
      return temp[i];
  }
  return std::nullopt;
}

int main() {
  std::vector<int> arr = {30, 10, 50, 20, 10, 40};

  std::optional<int> result = findSecondSmallest(arr);
  if (result.has_value()) {
    std::cout << "second smallest: " << result.value() << std::endl;
  } else {
    std::cout << "second smallest does not exist\n";
  }

  std::vector<int> arr2 = {10, 10, 10};

  std::optional<int> result2 = findSecondSmallest(arr2);
  if (result2.has_value()) {
    std::cout << "second smallest: " << result2.value() << std::endl;
  } else {
    std::cout << "second smallest does not exist\n";
  }
  return 0;
}
