class Solution 
{
  public:
    void mirror(Node* node) 
    {
         if (node == nullptr) return;
        queue<Node*> q;
        q.push(node);
        while (!q.empty()) 
        {
            Node* current = q.front();
            q.pop();
            swap(current->left, current->right);
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
    }
};
