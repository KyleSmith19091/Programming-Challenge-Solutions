#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *reverseList(ListNode *head) {

  if (head == NULL) {
    return head;
  } else if (head->next == NULL) {
    return head;
  }

  reverseList(head->next);
  int temp = head->val;

  return head;
}

int main(){
	cin.tie(0);

	return 0;
}
