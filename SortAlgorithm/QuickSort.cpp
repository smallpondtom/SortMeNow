void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

int partition(int *arr, int li, int ri) {
  int pivot = ri;
  int marker = li;
  for (int i = li; i < ri; i++) {
    if (arr[i] < arr[pivot]) {
      swap(&arr[i], &arr[marker]);
      marker++;
    }
  }
  swap(&arr[marker], &arr[pivot]);
  return marker;
}

void quickSort(int *arr, int li, int ri) {
  if (li < ri) {
    int pivot = partition(arr, li, ri);
    // Recursion
    quickSort(arr, li, pivot - 1);
    quickSort(arr, pivot + 1, ri);
  }
}
