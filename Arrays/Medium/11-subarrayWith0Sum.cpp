bool subArrayExists(int arr[], int n)
{
  unordered_map<int, int> mp;
  int sum = 0;
  for (int i = 0; i < n; ++i)
  {
    sum += arr[i];
    if (sum == 0 || mp.find(sum) != mp.end())
      return true;
    mp[sum] = i;
  }
  return false;
}
