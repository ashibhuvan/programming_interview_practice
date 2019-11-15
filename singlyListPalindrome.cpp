//checks if singly linked list is a palindrome

//need to implement the singly linked list here and provide the main fuction for testing

// Singly-linked lists are already defined with this interface:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
bool isListPalindrome(ListNode<int> * l) {
    std::vector<int> results1;
    
    
    ListNode<int> * temp = l;
    if(l==NULL) return true;
    while(l!=NULL){
        results1.push_back(l->value);
        l = l->next;
        
    }
    std::vector<int> compare;
    for(std::vector<int>::reverse_iterator bob = results1.rbegin(); bob != results1.rend(); bob++){
        compare.push_back(*bob);
    }
    if(compare == results1) {return true;}
    else return false;
    
}
