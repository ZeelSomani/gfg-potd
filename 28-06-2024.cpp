class Solution
{ 
public: 
    std::string pattern(std::vector<std::vector<int>>& arr) 
      { 
        int n = arr.size(); 
        auto isPalindrome = [](const std::vector<int>& v) -> bool 
          { 
            int len = v.size(); 
            for (int i = 0; i < len / 2; ++i)
            { 
                if (v[i] != v[len - i - 1]) 
                { 
                    return false; 
                } 
            } 
            return true; 
        }; 
        for (int i = 0; i < n; ++i) 
        { 
            if (isPalindrome(arr[i]))
            { 
                return std::to_string(i) + " R"; 
            } 
        } 
        for (int j = 0; j < n; ++j) 
        { 
            std::vector<int> column(n); 
            for (int i = 0; i < n; ++i)
            { 
                column[i] = arr[i][j]; 
            } 
            if (isPalindrome(column)) 
            { 
                return std::to_string(j) + " C"; 
            } 
        }
        return "-1"; 
    } 
};
