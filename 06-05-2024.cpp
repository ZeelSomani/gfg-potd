vector<int> noSibling(Node* root){ vector<int> ans;
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* node = q.front(); q.pop();
        int cnt = 0, tt = -1;
        if (node->left) 
        {
            ++cnt; tt = node->left->data;
            q.push(node->left);
        }
        if (node->right)
        {
            ++cnt; tt = node->right->data;
            q.push(node->right);
        }
        if (cnt == 1) 
        {
            ans.push_back(tt);
        }
    }

    if (ans.size() == 0) return {-1};

    sort(ans.begin(), ans.end());

    return ans;
}
