int distanceSquared(vector<int>& point) 
{
    return point[0] * point[0] + point[1] * point[1];
}
class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k)
     {
          priority_queue<pair<int, vector<int>>> maxHeap;
         for (auto& point : points)
    {
        int dist = distanceSquared(point);
        maxHeap.push({dist, point});
        if (maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }
    vector<vector<int>> result;
    while (!maxHeap.empty()) 
    {
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }
    return result;
    }
};
