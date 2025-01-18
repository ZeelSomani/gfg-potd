class Solution
{
public:
    Node* reverseList(Node* head) 
     {
        Node *prev = NULL, *curr = head, *next;
        while (curr) 
         {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
