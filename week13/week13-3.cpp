//week13-3.cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans = new ListNode(999); //故意放999 代表奇怪的值
        ListNode*ans2 = ans; //會滑動的指標,把ans後面的Linked List逐一處理
        int carry = 0; //一開始還沒有進位的值,放0
        while( l1 != nullptr || l2 != nullptr ){ //只要有1個不是空指標
            int now = carry;
            if(l1 != nullptr) { //處理左邊的list1
                now += l1->val; //把值換進去
                l1 = l1->next; //換下一筆
            }

            if(l2 != nullptr){
                now += l2->val; //把值換進去
                l2 = l2->next; //換下一筆
            }
            ans2->next = new ListNode(now % 10);
            ans2 = ans2->next;
            carry = now/10;
        }
        if(carry>0){
            ans2->next = new ListNode(carry);
        }
        return ans->next;
    }
};
