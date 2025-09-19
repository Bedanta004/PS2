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
    void reorderList(ListNode* head) {
        vector<int> a,v;
        ListNode* t = head;
        while(t){
            a.push_back(t->val);
            t = t->next;
        }
        int s = a.size()-1;
        for(int i=0; i<=a.size()/2; i++){
                v.push_back(a[i]);
                //if (i != s - i)
                v.push_back(a[s-i]);
            }    
        // v.pop_back();
        int i = 0;
        t = head;
        while(t && i < v.size()){
            t->val = v[i];
            i++;
            t = t->next;
        }
        t = head;
    }
};