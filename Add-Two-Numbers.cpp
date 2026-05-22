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
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        int sum, carry;
15        ListNode* head = nullptr;
16        ListNode* tail = nullptr;
17        carry=0;
18        while(l1 || l2|| carry!=0){
19            sum = carry;
20            if(l1){
21                sum+=l1->val;
22                l1=l1->next;
23            }
24            if(l2){
25                sum+=l2->val;
26                l2 = l2->next;
27            }
28            carry = sum/10;
29            ListNode* newNode = new ListNode(sum%10);
30            if(head==nullptr){
31                head = newNode;
32                tail = newNode;
33            }else{
34                tail->next = newNode;
35                tail=tail->next;
36            }
37        }
38        return head;
39    }
40};