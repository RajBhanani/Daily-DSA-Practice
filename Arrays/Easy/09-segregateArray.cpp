void segregateElements(int arr[], int n)
{
  queue<int> pos, neg;
  for (int i = 0; i < n; ++i)
  {
    if (arr[i] >= 0)
      pos.push(arr[i]);

    else
      neg.push(arr[i]);
  }
  int posSize = pos.size();
  for (int i = 0; i < posSize; ++i)
  {
    arr[i] = pos.front();
    pos.pop();
  }
  for (int i = posSize; i < n; ++i)
  {
    arr[i] = neg.front();
    neg.pop();
  }
}
