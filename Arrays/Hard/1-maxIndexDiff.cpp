int maxIndexDiff(int a[], int n) 
    { 
        int minL[n];
        int maxR[n];
        
        minL[0] = a[0];
        for(int i = 1; i < n; ++i)
            minL[i] = min(a[i], minL[i - 1]);
        
        maxR[n-1] = a[n-1];
        for(int i = n - 2; i >= 0; --i)
            maxR[i] = max(a[i], maxR[i + 1]);
        
        int i = 0, j = 0, maxDiff = -1;
        while(j < n && i < n)
        {
            if(minL[i] <= maxR[j])
            {
                maxDiff = max(maxDiff, j - i);
                j++;
            }
            else
                i++;
        }
        return maxDiff;
    }
