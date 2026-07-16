/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         ListNode* slow= head;
         ListNode* fast= head;

         bool iscycle = false;
          while(fast!=NULL && fast->next!= NULL){
            slow= slow->next;
            fast= fast->next->next;

            if(slow==fast){
                iscycle = true;
                break; //fr preserving the node
            }

          }
            // NO CYCLE IS EXIST
            if(!iscycle){
                return NULL;
            }
             // CYCYLE IS EXIST

             slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;      //ek hi baar krnge isko nhi ki same point mil sake 
            }
            

          return fast;
    }
};