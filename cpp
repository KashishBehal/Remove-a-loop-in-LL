class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        unordered_map<Node* , bool>mp;
        Node* prev=NULL;
        while(head!=NULL){
        if(mp[head]==true){
            prev->next=NULL;
            return;
        }
        mp[head]=1;
        prev=head;
        head=head->next;
    }
    }
};
