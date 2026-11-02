#include <algorithm>
#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int> &arr) {
  if (arr.empty())
    return 0;
  std::vector<int> unique;
  unique.push_back(arr[0]);
  for (size_t i = 1; i < arr.size(); i++) {
    if (arr[i] != unique.back()) {
      unique.push_back(arr[i]);
    }
  }
  arr = unique;
  return static_cast<int>(arr.size());
}

int main() {
  std::vector<int> arr = {5, 5, 5, 10, 10, 20};
  std::cout << "unique count: " << removeDuplicates(arr) << std::endl;

  std::cout << "unique elements: ";
  for (const int i : arr)
    std::cout << i << " ";
  std::cout << std::endl;
  return 0;
}