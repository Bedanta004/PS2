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
        vector<int> v;
        int zero = 0, sum = 0;
        ListNode* t = head;

        while(t){
            if(t->val == 0){ 
            zero++;
            if(zero == 2){
                v.push_back(sum);
                sum = 0;
                zero = 1;
            }
            }
            else{
                sum += t->val;
            }
            t = t->next;
        }
        int i=0;
        t = head->next;
        while(t && i < v.size()){
            t->val = v[i];
            if(i == v.size()-1) t->next = NULL;
            i++;
            t = t->next;
        }
        return head->next;
    }
};