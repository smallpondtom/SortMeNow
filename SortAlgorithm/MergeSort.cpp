void merge(int *arr, int p, int q, int r) {
  int n1, n2, i, j, k;
  n1 = q - p + 1;
  n2 = r - q;
  int L[n1], R[n2];

  for (i = 0; i < n1; i++) {
    L[i] = arr[p + i];
  }

  for (j = 0; j < n2; j++) {
    R[j] = arr[q + j + 1];
  }

  i = 0;
  j = 0;

  for (k = p; i < n1 && j < n2; k++) {
    if (L[i] < R[j]) {
      arr[k] = L[i++];
    } else {
      arr[k] = R[j++];
    }
  }

  while (i < n1) {
    arr[k++] = L[i++];
  }

  while (j < n2) {
    arr[k++] = R[j++];
  }
}

void mergeSort(int *arr, int p, int r) {
  int q;
  if (p < r) {
    q = (p + r) / 2;
    mergeSort(arr, p, q);
    mergeSort(arr, q + 1, r);
    merge(arr, p, q, r);
  }
}
