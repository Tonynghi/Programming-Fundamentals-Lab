#include <iostream>

using namespace std;

// YOU ARE NOT ALLOWED TO MODIFY INITIAL CODE, ONLY CODE IN TODO
class Node {
    int val;
    Node* next;

   public:
    Node() : val(0), next(nullptr) {}
    Node(int x) {
        // TO DO
        this->val = x;
        this->next = nullptr;
    }
    Node(int x, Node* next) {
        // TO DO
        this->val = x;
        this->next = next;
    }
    int getVal() {
        // TO DO
        return this->val;
    }
    Node* getNext() {
        // TO DO
        return this->next;
    }
    void setVal(int x) {
        // TO DO
        this->val = x;
    }
    void setNext(Node* next) {
        // TO DO
        this->next = next;
    }
};
class ListNode {
   public:
    Node* swap(Node* head) {
        // TO DO
        Node* newHead = head;
        Node* tmp = head;
        
        if(tmp->getNext() != nullptr){
            newHead = tmp->getNext();
            tmp->setNext(newHead->getNext());
            newHead->setNext(tmp);
        }
        
        if(tmp->getNext() != nullptr){
            tmp = tmp->getNext();
            Node* tmpPre = newHead->getNext();
            while(tmp->getNext() != nullptr){
                Node* tmpPost = tmp->getNext();
                tmp->setNext(tmpPost->getNext());
                tmpPost->setNext(tmp);
                tmpPre->setNext(tmpPost);
                if(tmp->getNext() == nullptr) break;
                else {
                    tmpPre = tmp;
                    tmp = tmp->getNext();
                }
            }
        }
        
        return newHead;
    }

    Node* createList(int arr[], int n) {
        // TO DO
        Node* head = new Node(arr[0]);
        
        Node* tmp = head;
        
        for(int i = 1; i < n; i++){
            Node* newNode = new Node(arr[i]);
            tmp->setNext(newNode);
            tmp = tmp->getNext();
        }
        
        return head;
        
    }
    void printList(Node* head) {
        // TO DO
        Node* tmp = head;
        while(tmp->getNext() != nullptr){
            cout << tmp->getVal() << " ";
            tmp = tmp->getNext();
        }
        cout << tmp->getVal();
    }
};

int main(){
    int num = 5;
    int numArr[num] = {1, 2, 3, 4, 5};

    ListNode* list = new ListNode;

    Node* testHead = list->createList(numArr, num);

    testHead = list->swap(testHead);

    list->printList(testHead);

    return 0;
}