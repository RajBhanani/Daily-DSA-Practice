int findMin(int arr[], int n)
{
  for (int i = 0; i < n; ++i)
    if (arr[i] < arr[i - 1])
      return arr[i];
  return arr[0];
}
