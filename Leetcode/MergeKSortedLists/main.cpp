#include <iostream>
#include <queue>

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

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) { // O(n+m)
	if(list1 == NULL) {
		return list2;
	}
		
	if(list2 == NULL) {
		return list1;
	} 
		
    ListNode * ptr = list1;
    if(list1 -> val > list2 -> val) {
        ptr = list2;
        list2 = list2 -> next;
    } else {
        list1 = list1 -> next;
    }

    ListNode *curr = ptr;
        
	// till one of the list doesn't reaches NULL
    while(list1 &&  list2) {
        if(list1 -> val < list2 -> val){
            curr->next = list1;
            list1 = list1 -> next;
        } else {
            curr->next = list2;
            list2 = list2 -> next;
        }
        curr = curr -> next;
    }
		
	// adding remaining elements of bigger list.
    if(!list1)
        curr -> next = list2;
    else
        curr -> next = list1;
            
    return ptr;
}

ListNode* mergeKLists(vector<ListNode*>& lists) { 
    ListNode* curr = nullptr;
    min_pq pq;
    for(const auto& listHead : lists) {
        curr = listHead;
        while(curr) {
            pq.push(curr->val);
            curr = curr->next;
        }
    }

    ListNode* head = nullptr;
    curr = nullptr;
    while(!pq.empty()) {
        if(!head) {
            head = new ListNode(pq.top());
            curr = head;
        } else {
            curr->next = new ListNode(pq.top());
            curr = curr->next;
        }

        pq.pop();
    }

    return head;
}

int main() {

    std::vector<ListNode*> list;

    mergeKLists(list);

    return 0;
}
