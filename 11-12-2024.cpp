class Solution 
{
public:
    int nextGap(int gap)
    {
        return (gap <= 1) ? 0 : (gap / 2) + (gap % 2);
    }

    void mergeArrays(vector<int>& a, vector<int>& b) 
    {
        int n = a.size(), m = b.size(), gap = n + m;
       for (gap = nextGap(gap); gap > 0; gap = nextGap(gap))
          {
            int i, j;
             for (i = 0; i + gap < n; i++) 
            {
                if (a[i] > a[i + gap]) swap(a[i], a[i + gap]);
            }

            for (j = (gap > n ? gap - n : 0); i < n && j < m; i++, j++) 
            {
                if (a[i] > b[j]) swap(a[i], b[j]);
            }

            for (j = 0; j + gap < m; j++) 
            {
                if (b[j] > b[j + gap]) swap(b[j], b[j + gap]);
            }
        }
    }
};
