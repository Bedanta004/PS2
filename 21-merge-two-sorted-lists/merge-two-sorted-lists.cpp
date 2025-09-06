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
void cases(ListNode* list, vector<int>& v){
    ListNode* t = list;

    while(t){
        v.push_back(t->val);
        t = t->next;
    }
}
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    vector<int> v;
        cases(list1, v);
        cases(list2, v);
        sort(v.begin(), v.end());
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        for (int x : v) {
            curr->next = new ListNode(x);
            curr = curr->next;
        }
        return dummy->next;
    }
};