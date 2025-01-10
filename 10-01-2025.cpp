class Solution
{
  public:
    vector<int> countDistinct(vector<int> &arr, int k)
     {
         vector<int> result; 
    unordered_map<int, int> freqMap; 
    for (int i = 0; i < k; i++)
   {
        freqMap[arr[i]]++;
    }
    result.push_back(freqMap.size());
    for (int i = k; i < arr.size(); i++) 
    {
        int outgoing = arr[i - k];
        freqMap[outgoing]--;
        if (freqMap[outgoing] == 0)
        {
            freqMap.erase(outgoing);
        }
        int incoming = arr[i];
        freqMap[incoming]++;
        result.push_back(freqMap.size());
    }
    return result;
    }
};
