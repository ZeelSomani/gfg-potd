class Solution 
{
  public:
    int kthMissing(vector<int> &arr, int k) 
    {       
        int missingCount = 0, currentNumber = 1, index = 0;  
        while (true)
        {
        if (index < arr.size() && arr[index] == currentNumber) 
          {
            index++;
          }
          else
          {
            missingCount++;
            if (missingCount == k)
            {
                return currentNumber; 
            }
        }
        currentNumber++;
    }
  }  
};
