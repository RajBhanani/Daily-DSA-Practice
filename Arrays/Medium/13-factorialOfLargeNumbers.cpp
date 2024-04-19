void multiply(vector<int> &arr, int num, int *frontIndex)
{
  int carry = 0;
  for (int i = 0; i < *frontIndex; ++i)
  {
    int res = (arr[i] * num) + carry;
    arr[i] = res % 10;
    carry = res / 10;
  }
  if (carry > 0)
  {
    while (carry > 0)
    {
      arr.push_back(carry % 10);
      carry /= 10;
      (*frontIndex)++;
    }
  }
}

vector<int> factorial(int N)
{
  if (N == 0 || N == 1)
    return {1};
  vector<int> res;
  int frontIndex = 1;
  res.push_back(2);
  for (int i = 3; i <= N; i++)
  {
    multiply(res, i, &frontIndex);
  }
  vector<int> arr;
  for (int i = frontIndex - 1; i >= 0; --i)
  {
    arr.push_back(res[i]);
  }
  return arr;
}
