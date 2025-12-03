
//week13-2b.cpp
//中間練習的程式 練習new Listnode(999)產生新的node
//練習用 ans->next 把node接起來
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = new ListNode(888);
        ans->next = ans2;
        return ans; //這個程式將可以把node 999的下一個接888
    }
};

