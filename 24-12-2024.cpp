class Solution
{
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) 
    {
        int n = mat.size();    
        int m = mat[0].size();
       int low = 0, high = n * m - 1;
        while (low <= high) 
        {
        int mid = low + (high - low) / 2;
        int mid_value = mat[mid / m][mid % m]; 
        if (mid_value == x)
        {
            return true;
        } 
        else if (mid_value < x) 
        {
            low = mid + 1;
        } 
        else
        {
            high = mid - 1;
        }
    }
    return false;
    }
};
