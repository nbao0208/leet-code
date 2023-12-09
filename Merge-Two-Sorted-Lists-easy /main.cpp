#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int sizeOfList(ListNode *list) {
    if (list == nullptr) {
        return 0;
    }
    int size = 0;
    ListNode *temp = list;
    while (temp->next != NULL) {
        size++;
        temp = temp->next;
    }
    return size;
}

void addNode(ListNode *list, int value) {
    ListNode *temp = list;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    ListNode *newNode = new ListNode();
    newNode->val = value;
    newNode->next = nullptr;
    temp->next = newNode;
}

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode *mergedList = new ListNode();
    if (list1 == nullptr) {
        return list2;
    }
    if (list2 == nullptr) {
        return list1;
    }
    if (list1->val < list2->val) {
        mergedList->val = list1->val;
        mergedList->next = nullptr;
        list1 = list1->next;
    } else {
        mergedList->val = list2->val;
        mergedList->next = nullptr;
        list2 = list2->next;
    }
    while (list1 != nullptr || list2 != nullptr) {
        if (list1 == nullptr) {
            addNode(mergedList, list2->val);
            list2 = list2->next;
        } else if (list2 == nullptr) {
            addNode(mergedList, list1->val);
            list1 = list1->next;
        } else {
            if (list1->val < list2->val) {
                addNode(mergedList, list1->val);
                list1 = list1->next;
            } else {
                addNode(mergedList, list2->val);
                list2 = list2->next;
            }
        }

    }
    return mergedList;
}

int main() {

    return 0;
}
