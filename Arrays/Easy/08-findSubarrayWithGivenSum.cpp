vector<int> subarraySum(vector<int> arr, int n, long long s)
{
  int curr = arr[0], start = 0;
  for (int i = 1; i <= n; ++i)
  {
    while (curr > s && start < i - 1)
    {
      curr -= arr[start];
      start++;
    }
    if (curr == s)
      return {start + 1, i};
    if (i < n)
      curr += arr[i];
  }
  return {-1};
}
