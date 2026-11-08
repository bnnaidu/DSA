#include <iostream>
#include <vector>

void leftRotate(std::vector<int> &arr, int k) {
  int n = arr.size();
  if (n == 0)
    return;
  k = k % n;
  std::vector<int> temp(n);
  for (int i = 0; i < n; i++) {
    int newIdx = (i - k + n) % n;
    temp[newIdx] = arr[i];
  }
  arr = temp;
}

int main() {
  std::vector<int> arr = {10, 20, 30, 40, 50};
  leftRotate(arr, 2);
  for (size_t i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}