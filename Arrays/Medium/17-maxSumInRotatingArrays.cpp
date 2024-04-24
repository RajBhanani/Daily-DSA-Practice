int max_sum(int A[], int N)
{
  int sum = 0, curr = 0;
  for (int i = 0; i < N; ++i)
  {
    sum += A[i];
    curr += A[i] * i;
  }
  int res = curr;
  for (int i = 1; i < N; ++i)
  {
    curr = curr - (sum - A[i - 1]) + (A[i - 1] * (N - 1));
    res = max(res, curr);
  }
  return res;
}
