#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class list{
public:
    node* head;
    node* tail;

    list(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        node* newnode = new node(val);

        if(head == NULL){
            head = tail = newnode;
        }
        else{
            newnode->next = head;
            head = newnode;
        }
    }

    void push_back(int val){
        node* newnode = new node(val);

        if(head == NULL){
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    void printlist(){
        node* temp = head;

        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    void insert(int val, int pos){
        
        // insert at position 0
        if(pos == 0){
            push_front(val);
            return;
        }

        node* newnode = new node(val);
        node* temp = head;

        for(int i = 0; i < pos-1; i++){

            if(temp == NULL){
                cout << "Position is invalid" << endl;
                return;
            }

            temp = temp->next;
        }

        if(temp == NULL){
            cout << "Position is invalid" << endl;
            return;
        }

        newnode->next = temp->next;
        temp->next = newnode;

        // if inserted at the end
        if(newnode->next == NULL){
            tail = newnode;
        }
    }
};

int main(){

    list ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(4);
    ll.push_back(5);

    ll.printlist();

    ll.insert(10, 2);

    ll.printlist();

    return 0;
}