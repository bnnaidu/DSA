#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int> &arr) {
  if (arr.empty())
    return 0;
  size_t i = 0;
  for (size_t j = 1; j < arr.size(); j++) {
    if (arr[i] != arr[j]) {
      arr[++i] = arr[j];
    }
  }
  return static_cast<int>(i + 1);
}

int main() {
  std::vector<int> arr = {5, 5, 5, 10, 10, 20};
  int count = removeDuplicates(arr);
  std::cout << "unique count: " << count << std::endl;
  std::cout << "unique elements: ";
  for (int i = 0; i < count; i++)
    std::cout << arr[i] << " ";
  std::cout << std::endl;
  return 0;
}