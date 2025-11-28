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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int, int> freq;
        ListNode* t = head;

        while(t){
            freq[t->val]++;
            t = t->next;
        }

        ListNode* dummy = new ListNode(0, head);
        t = dummy;
        while(t->next){
            if(freq[t->next->val] > 1){
                t->next = t->next->next;  
            } else {
                t = t->next;
            }
        }
        return dummy->next;
    }
};