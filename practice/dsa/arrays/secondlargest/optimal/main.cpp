#include <climits>
#include <iostream>
#include <optional>
#include <vector>

std::optional<int> findSecondLargest(std::vector<int> &arr) {
  int largest = arr[0];
  int secondLargest = INT_MIN;
  bool foundSecond = false;

  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] > largest) {
      secondLargest = largest;
      largest = arr[i];
      foundSecond = true;
    } else if (arr[i] < largest && (!foundSecond || arr[i] > secondLargest)) {
      secondLargest = arr[i];
      foundSecond = true;
    }
  }
  if (foundSecond)
    return secondLargest;
  return std::nullopt;
}

int main() {
  std::vector<int> arr = {10, 50, 20, 50, 40};
  std::optional<int> result = findSecondLargest(arr);

  if (result.has_value()) {
    std::cout << "second largest: " << result.value() << std::endl;
  } else {
    std::cout << "seond largest does not exist\n";
  }

  std::vector<int> arr2 = {10, 10, 10};
  std::optional<int> result2 = findSecondLargest(arr2);

  if (result2.has_value()) {
    std::cout << "second largest: " << result2.value() << std::endl;
  } else {
    std::cout << "seond largest does not exist\n";
  }

  std::vector<int> arr3 = {10, INT_MIN};
  std::optional<int> result3 = findSecondLargest(arr3);

  if (result3.has_value()) {
    std::cout << "second largest: " << result3.value() << std::endl;
  } else {
    std::cout << "seond largest does not exist\n";
  }
  return 0;
}