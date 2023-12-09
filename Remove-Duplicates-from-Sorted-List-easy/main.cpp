#include <iostream>

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


//void addNode(ListNode *head, int value) {
//    ListNode *temp = head;
//    while (temp->next != nullptr) {
//        temp = temp->next;
//    }
//    temp->next = new ListNode(value);
//}

ListNode *deleteDuplicates(ListNode *head) {
    ListNode *temp = head;
    while (temp != nullptr && temp->next != nullptr) {
        if (temp->val == (temp->next)->val) {
            temp->next = (temp->next)->next;
        } else {
            temp = temp->next;
        }
    }
    return head;
}

int main() {

    return 0;
}
