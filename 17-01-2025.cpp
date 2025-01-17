class Solution 
{
  public:
    vector<int> productExceptSelf(vector<int>& arr)
    {
        int n = arr.size();
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);
    prefix[0] = 1;
    for (int i = 1; i < n; i++) 
   {
        prefix[i] = prefix[i - 1] * arr[i - 1];
    }
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * arr[i + 1];
    }
    vector<int> result(n);
    for (int i = 0; i < n; i++)
    {
        result[i] = prefix[i] * suffix[i];
    }
    return result;
    }
};
