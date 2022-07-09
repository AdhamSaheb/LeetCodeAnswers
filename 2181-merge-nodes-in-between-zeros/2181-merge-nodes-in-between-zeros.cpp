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
    ListNode* mergeNodes(ListNode* head) {
        int sum = 0 ;
        ListNode *ptr = head ;
        ListNode *ans = new ListNode(0), *ansPtr = ans ;
        while(ptr) {
            if(ptr->val) sum += ptr->val; 
            else if(!ptr->val and sum) {
                ansPtr->next = new ListNode(sum) ;
                ansPtr = ansPtr-> next ;
                sum = 0 ; 
            }
            ptr = ptr->next ;
        }
        return ans->next; 
    }
};