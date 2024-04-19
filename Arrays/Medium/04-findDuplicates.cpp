vector<int> duplicates(long long arr[], int n)
{
  map<int, int> mp;
  for (int i = 0; i < n; ++i)
  {
    mp[arr[i]]++;
  }
  vector<int> res;
  vector<int> nores(1, -1);
  for (auto itr = mp.begin(); itr != mp.end(); ++itr)
  {
    if (itr->second > 1)
      res.push_back(itr->first);
  }
  return res.empty() ? nores : res;
}
