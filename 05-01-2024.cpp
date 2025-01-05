class Solution
 {
  public:
    int countPairs(vector<int> &arr, int target) 
    {
        int n = arr.size();
    int count = 0;
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) 
    {
        int sum = arr[left] + arr[right];
        if (sum < target)
         {
            count += (right - left);
            left++;
          } 
         else 
         {
            right--;
         }
    }
    return count;
    }
};
