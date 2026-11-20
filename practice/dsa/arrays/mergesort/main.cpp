#include <iostream>
void mergeSort(int a[], int b[], int c[], int m, int n) {
  int i = 0, j = 0, k = 0;
  while (i < m && j < n) {
    if (a[i] < b[j]) {
      c[k++] = a[i++];
    } else {
      c[k++] = b[j++];
    }
  }
  while (i < m) {
    c[k++] = a[i++];
  }
  while (j < n) {
    c[k++] = b[j++];
  }
}

int main() {
  int a[] = {2, 5, 19, 15, 25};
  int b[] = {3, 4, 7, 18, 20};
  int c[10];
  mergeSort(a, b, c, 5, 5);
  for (int i = 0; i < 10; i++) {
    std::cout << c[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}