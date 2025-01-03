class Solution
{
  public:
    long subarrayXor(vector<int> &arr, int k)
      {
        unordered_map<int, int> freq;
    int xorSum = 0;
    int count = 0;
    for (int num : arr) 
      {
        xorSum ^= num;
        if (xorSum == k)
         {
            count++;
         }
        int targetXOR = xorSum ^ k;
        if (freq.find(targetXOR) != freq.end()) 
        {
            count += freq[targetXOR];
        }
        freq[xorSum]++;
    }
    return count;
    }
};
