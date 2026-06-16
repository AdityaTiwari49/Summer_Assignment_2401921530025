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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;
        ListNode* temp = list1;
        ListNode* temp1 = list2;
        while (temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        while (temp1 != NULL) {
            arr.push_back(temp1->val);
            temp1 = temp1->next;
        }
        sort(arr.begin(), arr.end());
        if (arr.empty()) return nullptr;
        ListNode* newhead = new ListNode(arr[0]);
        ListNode* curr = newhead;

        for (int i = 1; i < arr.size(); i++) {
            curr->next = new ListNode(arr[i]);
            curr = curr->next;
        }
        return newhead;
    }
};