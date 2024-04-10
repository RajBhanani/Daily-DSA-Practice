int missingNumber(vector<int>& array, int n) {
  int total = 0;
  for(int i = 0; i < array.size(); ++i)
    total += array[i];
  int sumOfNNumbers = (n * (n + 1)) / 2;
  return sumOfNNumbers - total;
}
