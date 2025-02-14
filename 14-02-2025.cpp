class Solution
{
  private:
    Node *first = NULL, *second = NULL, *prev = NULL;
    void inorder(Node* root) 
     {
        if (!root) return;
        inorder(root->left);
        if (prev && prev->data > root->data) 
        {
            if (!first) first = prev;  
            second = root;             
        }
        prev = root;
        inorder(root->right);
    }
  public:
    void correctBST(Node* root) 
   {
        inorder(root);
        if (first && second)
        {
            swap(first->data, second->data);
        }
    }
};
void inorderPrint(Node* root) 
{
    if (!root) return;
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}
