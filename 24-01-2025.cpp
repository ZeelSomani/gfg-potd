class Solution 
{
  public:
    bool detectLoop(Node* head) 
     {
         if (!head || !head->next) return false;
        Node* slow = head;  
        Node* fast = head;  
    while (fast && fast->next) 
   {
        slow = slow->next;       
        fast = fast->next->next; 
        if (slow == fast) return true; // Loop detected
    }
    return false;
    }
};
