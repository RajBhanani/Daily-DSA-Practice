pair<long long, long long> getMinMax(long long a[], int n) {
        long long minEl = INT_MAX, maxEl = INT_MIN;
        for(int i = 0; i < n; ++i)
        {
            minEl = min(a[i], minEl);
            maxEl = max(a[i], maxEl);
        }
        return {minEl, maxEl};
    }
