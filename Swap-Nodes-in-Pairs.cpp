1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* swapPairs(ListNode* head) {
14        if(!head) return nullptr;
15        ListNode* temp1 = head;
16        if(!head->next) return head;
17        ListNode* temp2 = head->next;
18        head = temp2;
19        ListNode* prev = nullptr;
20        while(temp1 && temp2){
21            temp1->next = temp2->next;
22            temp2->next = temp1;
23            if(prev) prev->next = temp2;
24            prev = temp1;
25            temp1 = temp1->next;
26            if(temp1) temp2=temp1->next;
27            else break;
28        }
29        return head;
30    }
31};