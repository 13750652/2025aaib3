//week13-2a.cpp
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
       //ListNode* ans = ListNode(); //錯誤寫法
        ListNode* ans = new ListNode(999); //要有new給指標
        ListNode* now = ans; //現在處理的位置,是ans的分身
        while(list1 != nullptr && list2 != nullptr) {
            if(list1->val <= list2->val){ //比大小 左邊小,放左邊
                now->next = list1; //左邊小,放到答案理
                list1 = list1->next;
                now = now->next;

        }   else {  //右邊小,要放右邊的list2
                now->next = list2;
                list2 = list2->next; //用完了換下一筆
                now = now->next; //分身要處理下一筆
        }
    }
    if(list1 != nullptr)now->next = list1;
    if(list2 != nullptr)now->next = list2;
    return ans->next;
    }
};
