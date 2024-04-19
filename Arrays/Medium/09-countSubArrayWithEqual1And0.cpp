long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
{
  unordered_map<int, int> mp;
  int sumSoFar = 0, res = 0;
  for (int i = 0; i < n; ++i)
  {
    if (arr[i] == 0)
      arr[i] = -1;
    sumSoFar += arr[i];
    if (sumSoFar == 0)
      res++;
    if (mp[sumSoFar])
      res += mp[sumSoFar];
    if (mp[sumSoFar] == 0)
      mp[sumSoFar] = 1;
    else
      mp[sumSoFar]++;
  }
  return res;
}
