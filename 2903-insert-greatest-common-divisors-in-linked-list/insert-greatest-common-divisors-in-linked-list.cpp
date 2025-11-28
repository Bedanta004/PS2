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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* t = head;
        while(t && t->next){
            int v = gcd(t->val, t->next->val);
            ListNode* dummy = new ListNode(v);
            ListNode* nxt = t->next;        // save original next
            t->next = dummy;                // link current to gcd node
            dummy->next = nxt;              // link gcd node to original next
            t = nxt;
        }
        return head;
    }
};