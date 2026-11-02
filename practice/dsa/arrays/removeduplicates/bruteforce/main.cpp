#include <algorithm>
#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int> &arr) {
  if (arr.empty())
    return 0;
  std::vector<int> unique;
  for (size_t i = 0; i < arr.size(); i++) {
    if (std::find(unique.begin(), unique.end(), arr[i]) == unique.end()) {
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