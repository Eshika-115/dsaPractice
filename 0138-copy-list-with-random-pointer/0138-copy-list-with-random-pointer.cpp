/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head==NULL)
         return NULL;

        unordered_map< Node*,Node*> m;
        Node* newHead= new Node(head->val);
        Node* oldtemp=head->next;
        Node* newtemp= newHead;
        m[head]=newHead;  // copy kr rhe h map ke andr old to new

        while(oldtemp!= NULL){
        
        Node* copynode = new Node(oldtemp->val);
            
            newtemp->next=copynode;
           m[oldtemp]= copynode;
            oldtemp= oldtemp->next;
            newtemp=newtemp->next;
        }
         oldtemp=head;
         newtemp=newHead;
        while(oldtemp!=NULL){
         newtemp->random= m[oldtemp->random];
         oldtemp=oldtemp->next;
         newtemp=newtemp->next;
        }
        
       return newHead;  
    }
};