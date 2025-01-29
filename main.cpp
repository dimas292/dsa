#include <iostream>

using namespace std;

struct Node {
    public: 
    Node* next;
    int value; 
    Node(int value){
        this->value = value;
        this->next = nullptr;
    }
};

class LinkedList {
    private:
		Node* head;
		Node* tail;
		int length;

    public:
    LinkedList(int value){
        Node* newNode = new Node(value);
        this->head = newNode; 
        this->tail = newNode; 
        this->length = 1;
    }
   
    ~LinkedList() {
        Node* temp = head;
        while (head) {
            head = head->next;
            delete temp;
            temp = head;
        }


    }
    void append(int value){
        Node* newNode = new Node(value);
        newNode->next = nullptr; 

        if(length == 0){
            head = newNode;
            tail = newNode; 
        }else {
            tail->next = newNode; 
            tail = newNode; 
        }
        length += 1; 
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->value << " -> ";
            temp = temp->next;
        }
        cout << "NULL"; 
    }

    void getHead() {
        if (head == nullptr) {
            cout << "Head: nullptr" << endl;
        } else {
            cout << "Head: " << head->value << endl;
        }
    }

    void getTail() {
        if (tail == nullptr) {
            cout << "Tail: nullptr" << endl;
        } else { 
            cout << "Tail: " << tail->value << endl;
        }  
    }

    void getLength() {
        cout << "Length: " << length << endl;
    }

};



int main() {
        
    LinkedList* myLinkedList1 = new LinkedList(4);
    myLinkedList1->append(5);
    myLinkedList1->append(10);
    myLinkedList1->append(11);
    myLinkedList1->append(20);
    myLinkedList1->append(9);
    myLinkedList1->appendAtBegining(90);
    myLinkedList1->appendAtBegining(100);
    myLinkedList1->getHead();
    myLinkedList1->getTail();
    myLinkedList1->getLength();
    
    cout << "\nLinked List:\n";
    myLinkedList1->printList();
       
}

