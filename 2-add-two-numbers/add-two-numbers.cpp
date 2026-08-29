class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* dummynode = new ListNode(-1);
        ListNode* current = dummynode;

        ListNode* num1 = l1;
        ListNode* num2 = l2;

        int carry = 0;

        while (num1 != NULL || num2 != NULL) {

            int sum = carry;

            if (num1)
                sum += num1->val;

            if (num2)
                sum += num2->val;

            ListNode* newnode = new ListNode(sum % 10);

            carry = sum / 10;

            current->next = newnode;
            current = current->next;

            if (num1)
                num1 = num1->next;

            if (num2)
                num2 = num2->next;
        }

        if (carry) {
            ListNode* newnode = new ListNode(carry);
            current->next = newnode;
        }

        return dummynode->next;
    }
};