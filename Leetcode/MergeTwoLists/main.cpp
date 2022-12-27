#include <iostream>
#include <queue>
#include <functional>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using min_pq = priority_queue<int, std::vector<int>, std::greater<int>>;

// O(NLogN)
void AddListToPQ(ListNode* head, min_pq& pq) {
    auto currNode = head;
    while(currNode) {
        pq.push(currNode->val);
        currNode = currNode->next;
    }
}

bool minCompare(int a, int b) {
    return a > b;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    min_pq pq;
    
    AddListToPQ(list1, pq);
    AddListToPQ(list2, pq);

    ListNode* sortedListHead = nullptr;
    ListNode* curr = nullptr;

    while(!pq.empty()) { // O(NLogN)
        if(!sortedListHead) {
            sortedListHead = new ListNode(pq.top());
            curr = sortedListHead;
        } else {
            curr->next = new ListNode(pq.top());
            curr = curr->next;
        }

        pq.pop();
    }

    return sortedListHead;
}

int main() {
    return 0;
}
