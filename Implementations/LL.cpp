#include<iostream>
using namespace std;

struct LinkedList{
    int value;
    LinkedList *next;
};

class LL {
    private:
        LinkedList *head;
        LinkedList *tail;
        int size;

    public:
        LL(){
            head = NULL;
            tail = NULL;
            size = 0;
        }

        void addNode(int data){
            // create Node
            LinkedList* newNode = new LinkedList();
            newNode->value = data;
            newNode->next = NULL;

            // Add to linked list
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }
            else{
                // tail->next = newNode;
                // tail = newNode;
                tail->next = newNode;
                tail = newNode;
            }
            size++;
        }

        void removeNode(){
            // check if list is empty or not
            if(head == NULL){
                cout << "List is empty" << endl;
                return;
            }
            head = head->next;
            size--;
        }

        void print(){
            LinkedList* temp = head;
            while(temp != NULL){
                cout << temp->value << endl;
                temp = temp->next;
            }
            cout << endl;
        }
};

int main(){

    LL l1;
    l1.addNode(10);
    l1.addNode(20);
    l1.print();
    l1.addNode(30);
    l1.addNode(40);
    l1.print();
    l1.removeNode();
    l1.print();
    return 0;
}