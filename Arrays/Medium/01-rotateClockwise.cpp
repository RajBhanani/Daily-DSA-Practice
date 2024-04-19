void rotate(int arr[], int n)
{
    reverse(arr, arr + n - 1);
    reverse(arr, arr + n);
}
