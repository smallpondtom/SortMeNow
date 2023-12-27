void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void gnomeSort(int *arr, int n)
{
  int idx = 0;
  while (idx<n)
  {
    if (idx==0)
      idx++;
    if (arr[idx]>=arr[idx-1])
      idx++;
    else
    {
      swap(&arr[idx], &arr[idx-1]);
      idx--;
    }
  }
}
