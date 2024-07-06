class Solution
{
public:
    void populateNext(Node *root) 
    {
        Node* prev = nullptr; // To keep track of the previous node in in-order traversal
        inorderTraversal(root, prev);
    }

private:
    void inorderTraversal(Node* node, Node*& prev) 
    {
        if (!node) return;
        
        // Traverse the left subtree
        inorderTraversal(node->left, prev);
        
        // Process the current node
        if (prev) {
            prev->next = node; // Set the next pointer of previous node to current node
        }
        prev = node; // Update the previous node to the current node
        
        // Traverse the right subtree
        inorderTraversal(node->right, prev);
    }
};

// Function to print the next pointers of all nodes in in-order traversal
void printInorderSuccessors(Node* root)
{
    if (!root) return;
    printInorderSuccessors(root->left);
    cout << root->data << "->" << (root->next ? to_string(root->next->data) : "-1") << " ";
    printInorderSuccessors(root->right);
}
