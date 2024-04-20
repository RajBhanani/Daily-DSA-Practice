long long maxProduct(vector<int> arr, int n)
{
  long long int maxHere = arr[0], minHere = arr[0];
  long long int maxSoFar = arr[0];
  long long int tempMax, tempMin;
  for (int i = 1; i < n; ++i)
  {
    tempMax = max(arr[i] * maxHere, arr[i] * minHere);
    tempMin = min(arr[i] * maxHere, arr[i] * minHere);
    maxHere = max((long long)arr[i], tempMax);
    minHere = min((long long)arr[i], tempMin);
    maxSoFar = max(maxHere, maxSoFar);
  }
  return maxSoFar;
}
