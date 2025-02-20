class Solution
{
public:
    int minRemoval(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(), intervals.end());
        int count = 0, prevEnd = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] < prevEnd)
            {
                count++;
                prevEnd = min(prevEnd, intervals[i][1]);
            }
            else
            {
                prevEnd = intervals[i][1];
            }
        }
        return count;
    }
};
