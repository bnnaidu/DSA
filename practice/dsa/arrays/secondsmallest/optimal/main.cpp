#include <climits>
#include <iostream>
#include <optional>
#include <vector>

std::optional<int> findSecondSmallest(std::vector<int> &arr) {
  if (arr.size() < 2)
    return std::nullopt;
  int smallest = arr[0];
  int secondSmallest = INT_MAX;
  bool foundSecond = false;
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] < smallest) {
      secondSmallest = smallest;
      smallest = arr[i];
      foundSecond = true;
    } else if (arr[i] > smallest && (!foundSecond || arr[i] < secondSmallest)) {
      secondSmallest = arr[i];
      foundSecond = true;
    }
  }
  if (foundSecond)
    return secondSmallest;

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