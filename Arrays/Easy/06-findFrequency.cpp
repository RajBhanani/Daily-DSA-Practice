int findFrequency(vector<int> Arr, int X){
    int count = 0;
    for(int i = 0; i < Arr.size(); ++i)
    {
        if(Arr[i] == X)
            count++;
    }
    return count;
}
