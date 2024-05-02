class Solution
{
    Node* insertBinary(vector<int> &nodes, int l, int r)
    {
        if (l > r) return NULL;
        int mid = l + (r-l)/2;
        Node *root = new Node(nodes[mid]);
        root->left = insertBinary(nodes, l, mid-1);
        root->right = insertBinary(nodes, mid+1, r);
        return root;
    }
    void inorder(Node *root, vector<int> &nodes)
    {
        if(!root) return;
        inorder(root->left, nodes);
        nodes.push_back(root->data);
        inorder(root->right, nodes);
    }
    public:
    vector<int> serialize(Node *root) 
    {
        vector<int> nodes;
        inorder(root, nodes);
        return nodes;
    }
    Node * deSerialize(vector<int> &A)
    {
       return insertBinary(A, 0, A.size()-1); 
    }

};
