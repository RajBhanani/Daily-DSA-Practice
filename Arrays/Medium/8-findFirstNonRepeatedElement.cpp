int firstNonRepeating(int arr[], int n) 
    { 
        int first = INT_MAX;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; ++i)
        {
            mp[arr[i]] += i + n;
        }
        for(auto itr = mp.begin(); itr != mp.end(); ++itr)
        {
            if(itr->second - n < n)
                first = min(first, itr->second - n);
        }
        return first == INT_MAX ? 0 : arr[first];                                                                                                
    }
