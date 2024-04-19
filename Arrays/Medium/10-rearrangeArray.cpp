void rearrange(int arr[], int n)
{
  queue<int> pos, neg;
  for (int i = 0; i < n; ++i)
  {
    if (arr[i] >= 0)
      pos.push(arr[i]);

    else
      neg.push(arr[i]);
  }
  int count = 0;
  int posSize = pos.size(), negSize = neg.size();
  for (int i = 0; i < min(posSize, negSize); i++)
  {
    arr[count++] = pos.front();
    arr[count++] = neg.front();
    pos.pop();
    neg.pop();
  }
  for (int i = count; i < n; ++i)
  {
    if (pos.empty())
    {
      arr[i] = neg.front();
      neg.pop();
    }
    else
    {
      arr[i] = pos.front();
      pos.pop();
    }
  }
}
