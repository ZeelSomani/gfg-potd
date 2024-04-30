class Solution
{
    public:
    Node* reverse(Node *head)
      {
        Node *newHead=NULL;
        while(head)  
        {
            Node *temp=head->next;
            head->next=newHead;
            newHead=head;
            head=temp;
        }
        return newHead;
    }
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        Node *n1=reverse(num1), *n2=reverse(num2), *ans=new Node(-1), *dummy=ans;
        int carry=0;
        while(n1 || n2 || carry)
          {
            int sum=(n1?n1->data:0)+(n2?n2->data:0)+carry;
            carry=sum/10;
            ans->next=new Node(sum%10);
            ans=ans->next;
            if(n1) n1=n1->next;
            if(n2) n2=n2->next;
         }
        ans = reverse(dummy->next);
        while(ans->data==0 && ans->next)
            ans=ans->next;
        return ans;
    }
};
