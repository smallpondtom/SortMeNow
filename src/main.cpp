#include <gnomeSort.hpp>
#include <algorithm>
#include <iostream>
#include <time.h>

// Function Declarations
template <typename T> void printArray(T arr, int n);
template <typename T> void generateRandomArray(T arr, int n);

int main(int argc, char *argv[]) {
  int n = 32;
  int arr[n];

  generateRandomArray(arr, n);

  // Print out initial array
  printArray(arr, n);

  // Sorting algorithm
  gnomeSort(arr, n);

  // Print out sorted array
  printArray(arr, n);

  return 0;
}

// Print array
template <typename T> void printArray(T arr, int n) {
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << ' ';
  }
  std::cout << '\n';
}

// Random array generator
template <typename T> void generateRandomArray(T arr, int n) {
  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    arr[i] = (rand() % 1000) + 1;
  }
}
