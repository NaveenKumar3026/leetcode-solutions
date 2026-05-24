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
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14        if(!list1) return list2;
15        if(!list2) return list1;
16        ListNode* head;
17        ListNode* tail;
18        if(list1->val <= list2->val){
19            head=list1;
20            list1=list1->next;
21        }
22        else{
23            head=list2;
24            list2=list2->next;
25        }
26        tail = head;
27        while(list1 && list2){
28            if(list1->val > list2->val){
29                tail->next = list2;
30                list2 = list2->next;
31            }else{
32                tail->next = list1;
33                list1 = list1->next;
34            }
35            tail = tail->next;
36        }
37        while(list1){
38            tail->next = list1;
39            list1 = list1->next;
40            tail = tail->next;
41        }
42        while(list2){
43            tail->next = list2;
44            list2 = list2->next;
45            tail = tail->next;
46        }
47        return head;
48    }
49};