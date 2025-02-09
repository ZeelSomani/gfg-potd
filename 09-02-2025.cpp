class Solution
{
  public:
    int findMaxSum(Node *root)
     {
         if (!root) return 0;
        stack<Node*> s;
        unordered_map<Node*, int> mp;
        Node* last = nullptr;
        int res = INT_MIN;
        while (root || !s.empty())
        {
            if (root) s.push(root), root = root->left;
            else
            {
                Node* node = s.top();
                if (node->right && last != node->right) root = node->right;
                else
                {
                    s.pop();
                    int l = max(0, mp[node->left]);
                    int r = max(0, mp[node->right]);
                    res = max(res, l + r + node->data);
                    mp[node] = max(l, r) + node->data;
                    last = node;
                }
            }
        }
        return res;
    }
};
