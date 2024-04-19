int firstRepeated(int arr[], int n)
{
  int lowest = n + 1;
  unordered_map<int, int> mp;
  for (int i = n - 1; i >= 0; --i)
  {
    if (mp.find(arr[i]) != mp.end())
      lowest = i + 1;
    else
      mp[arr[i]]++;
  }
  return lowest == n + 1 ? -1 : lowest;
}
