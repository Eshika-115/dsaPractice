/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int travel_front(ListNode* head){

        int length=0;
         while(head!=NULL){
            length++;
            head=head->next;
         }

         return length;
          }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
         int l =travel_front(head);
        

         //corner case

       
         if(n==l){
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
         }
       

       int steps=l-n;
       ListNode* prev= NULL;
       ListNode* temp=head;
         while(steps--){
            prev=temp;
            temp=temp->next;
         }

         prev->next= temp->next;
         delete temp;
          return head;
    }
};