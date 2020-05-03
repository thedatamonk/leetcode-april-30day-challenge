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
    ListNode* middleNode(ListNode* head) {
        // calculate the length of the linked list
        int n=0;
        ListNode* temp = head;
        while (temp!=NULL){
            n++;
            temp = temp->next;
        }
        
        temp = head;
        int ix = 0;
        while (ix < floor(n/2)){
            temp = temp->next;
            ix++;
        }
        
        return temp;
    }
};