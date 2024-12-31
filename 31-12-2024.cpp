class Solution 
{
  public:
    int longestConsecutive(vector<int>& arr)
      {
       
        unordered_set<int> elements(arr.begin(), arr.end()); 
    int longestStreak = 0;
    for (int num : arr)
    {
        if (elements.find(num - 1) == elements.end()) 
        {
            int currentNum = num;
            int currentStreak = 1;
            while (elements.find(currentNum + 1) != elements.end())
            {
                currentNum++;
                currentStreak++;
            }
            longestStreak = max(longestStreak, currentStreak);
        }
    }
    return longestStreak;
    }
};
