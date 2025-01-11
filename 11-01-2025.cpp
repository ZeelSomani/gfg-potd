class Solution
{
  public:
    int longestUniqueSubstr(string &s)
   {
         unordered_map<char, int> lastSeen; 
           int maxLength = 0; 
           int start = 0; 
    for (int end = 0; end < s.length(); ++end)
      {
        char currentChar = s[end];
        if (lastSeen.find(currentChar) != lastSeen.end() && lastSeen[currentChar] >= start) 
       {
            start = lastSeen[currentChar] + 1;
        }
        lastSeen[currentChar] = end;
        maxLength = max(maxLength, end - start + 1);
    }
    return maxLength;
    }
};
