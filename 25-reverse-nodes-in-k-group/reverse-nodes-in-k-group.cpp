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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> arr, res;
        ListNode* t = head;
        while(t){
            arr.push_back(t->val);
            t = t->next;
        }
        stack<int> st;
        int m = 0, index = 0;

        for(int i=0; i<arr.size(); i++){
            if(m <= k){
                st.push(arr[i]);
                m++;
            }
            if(m == k){
                while(!st.empty()){
                    res.push_back(st.top());
                    st.pop();
                    if(st.empty()) m = 0;
                }
            }
        }
        if(m > 0){
            vector<int> temp;
            while(!st.empty()){
                temp.push_back(st.top());
                st.pop();
            }
            reverse(temp.begin(), temp.end());
            for(int x : temp) res.push_back(x);
        }
        t = head;
        int i=0;
        while(t){
            t->val = res[i];
            i++;
            t = t->next;
        }
        return head;
    }
};