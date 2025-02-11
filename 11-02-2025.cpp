class Solution
{
  public:
    bool isBST(Node* root, int minVal, int maxVal) 
    {
        if (root == nullptr)
        {
            return true;
        }
        if (root->data <= minVal || root->data >= maxVal) 
        {
            return false;
        }
        return isBST(root->left, minVal, root->data) && 
               isBST(root->right, root->data, maxVal);
    }
    bool isBST(Node* root) 
    {
        return isBST(root, INT_MIN, INT_MAX);
    }
};
