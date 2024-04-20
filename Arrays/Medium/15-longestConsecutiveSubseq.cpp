int findLongestConseqSubseq(int arr[], int N)
{
  int maxEl = *max_element(arr, arr + N);
  int res[maxEl + 1] = {0};
  for (int i = 0; i < N; ++i)
  {
    res[arr[i]] = 1;
  }
  int count = 0, maxCount = 0;
  for (int i = 0; i <= maxEl; ++i)
  {
    if (res[i] == 0)
      count = 0;
    else
    {
      count++;
      if (count > maxCount)
        maxCount = count;
    }
  }
  return maxCount;
}
