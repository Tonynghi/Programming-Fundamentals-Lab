/*
Viết chương trình theo cấu trúc OOP để tiến hành đổi chỗ các cặp giá trị liên tiếp nhau trong danh sách liên kết.

Sinh viên được yêu cầu hiện thực phần TODO của các hàm đã cho, không được tự ý điều chỉnh mã nguồn khởi tạo của chương trình.

Đầu vào:
n: độ dài của mảng
arr: mảng các giá trị trong linked list ban đầu

Đầu ra:
Tiến hành in ra màn hình danh sách liên kết sau khi chuyển đổi.

Mô tả chức năng các hàm:
swap: có chức năng đổi chỗ các cặp trong danh sách liên kết ban đầu, nhận đầu vào là địa chỉ head của danh sách liên kết ban đầu, trả về địa chỉ head của danh sách liên kết sau khi đã chuyển đổi.
createList: nhận đầu vào là mảng các giá trị khởi tạo và biến n là số lượng các phần tử của mảng, trả về địa chỉ con trỏ head của danh sách liên kết sau khi khởi tạo.
printList: nhận đầu vào là địa chỉ head của danh sách liên kết, in ra màn hình giá trị của các node trong danh sách liên kết.

For example:
Test	Input	Result
1       5       2 1 4 3 5
        1 2 3 4 5
*/

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