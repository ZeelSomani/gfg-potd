class Solution 
{
  public:
    bool twoSum(vector<int>& arr, int target) 
    {
         unordered_map<int, int> hashMap; 
        for (int i = 0; i < arr.size(); ++i)
        {
            int complement = target - arr[i]; 
            if (hashMap.find(complement) != hashMap.end())
            {
              return true; 
            }
        hashMap[arr[i]] = i;
        }
    return false;
    }
};
