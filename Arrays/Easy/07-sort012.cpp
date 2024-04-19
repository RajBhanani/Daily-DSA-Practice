void sort012(int a[], int n)
{
  int left = 0, right = n - 1, mid = 0;
  while (mid <= right)
  {
    switch (a[mid])
    {
    case 0:
      swap(a[left++], a[mid++]);
      break;
    case 1:
      mid++;
      break;
    case 2:
      swap(a[mid], a[right--]);
      break;
    }
  }
}
