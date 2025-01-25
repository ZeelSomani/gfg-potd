class Solution
{
  public:
    Node* findFirstNode(Node* head) 
     {
        if (head == nullptr || head->next == nullptr)
        return nullptr;
        Node* slow = head;
        Node* fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
          {
            slow = head;
            while (slow != fast)   
            {
                slow = slow->next;
                fast = fast->next;
            }
            return slow; 
        }
    }
      return nullptr;
  }
};
