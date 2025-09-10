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
    ListNode* swapPairs(ListNode* head) {
        vector<int> v;
        ListNode* t = head;
        ListNode* temp = head;

        while(t){
            v.push_back(t->val);
            t = t->next;
        }
        if(v.size() >= 2){
            for(int i=0; i+1<v.size(); i+=2){
                swap(v[i],v[i+1]);
            }
        }
        int i=0;
        t = head;
        while(t){
            t->val = v[i];
            i++;
            t = t->next;
        }
        return head;
    }
};