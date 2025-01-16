class Solution 
{
  public:
    int maxLen(vector<int> &arr) 
     {
           unordered_map<int, int> prefixSumIndex;
          int maxLength = 0, prefixSum = 0
         for (int i = 0; i < arr.size(); i++) 
           {
              prefixSum += (arr[i] == 0 ? -1 : 1)
              if (prefixSum == 0)
             {
                  maxLength = i + 1;
              }
              if (prefixSumIndex.find(prefixSum) != prefixSumIndex.end()) 
              {
                  maxLength = max(maxLength, i - prefixSumIndex[prefixSum]);
              }
              else
              {
                  prefixSumIndex[prefixSum] = i;
              }
          }
          return maxLength;
    }
};
