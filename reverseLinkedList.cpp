// Singly-linked lists are already defined with this interface:
#include <iostream>
#include <vector>


template<typename T>
struct ListNode {
   ListNode(const T &v) : value(v), next(nullptr) {}
   T value;
   ListNode *next;
 };

int main(){
	ListNode<int> bob(0);
	bob.next = new ListNode<int> (5);
	bob.next->next = new ListNode<int> (10);
	ListNode<int> * temp = bob.next->next;
	temp->next = new ListNode<int> (15);
	ListNode<int> *p = &bob;
	//now we have a linked list with 4 int numbers
	//lets iterate through, store the values in vector and try to add them
	ListNode<int> result(0);
	ListNode<int> *answer = &result;

	std::vector<int> storage;	
	while(p){
		storage.push_back(p->value);
		p = p->next;
	}
	for(auto& it : storage){
		std::cout << it << "\n";
		answer = answer->next = new ListNode<int> (it);
			
	}

	ListNode<int> * beginning = &result;
	while(beginning){
		std::cout << "new linked list: " << beginning->value << std::endl;
		beginning = beginning->next;
	}


	return 0;
}

