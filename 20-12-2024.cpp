class Solution 
{
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) 
      {
        vector<int> result;
        if (mat.empty() || mat[0].empty()) return result;
        int top = 0, bottom = mat.size() - 1;
        int left = 0, right = mat[0].size() - 1;
         while (top <= bottom && left <= right)
        {
            for (int col = left; col <= right; ++col) 
            {
              result.push_back(mat[top][col]);
            }
            top++;
            for (int row = top; row <= bottom; ++row)
            {
              result.push_back(mat[row][right]);
            }
            right--;
            if (top <= bottom) 
            {
                for (int col = right; col >= left; --col) 
                {
                  result.push_back(mat[bottom][col]);
                }
                bottom--;
            }
            if (left <= right)
            {
              for (int row = bottom; row >= top; --row) 
              {
                result.push_back(mat[row][left]);
              }
            left++;
        }
    }
    return result;
    }
};
