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

    node* splitATmid(node* head){
        node* slow =head;
        node* fast= head;
        node* prev = NULL;
        while (fast != NULL||fast->next != NULL){
            prev = slow;
            slow= slow->next;
            fast= fast->next->next;

        }
        if(prev != NULL){
            prev->next = NULL;
        }
        return slow;
    }
    node* reverse(node* head){
        node* curr = head;
        node* prev = NULL;
        while (curr != NULL){
           node* next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
            
        }
        head = prev;
    }
    node*  zigzagll(node* head){
        node* righthead = splitATmid(head);
        node* rightheadrev = reverse(righthead);

        node* left =head;
        node* right =rightheadrev;
        node* tail =right;

        while( left != NULL&& right != NULL){
            node* nextleft =left->next;
            node* nextright = right->next;

            left->next = right;
            right->next = nextleft;

            tail = right;

            left = nextleft;
            right =nextright;
        }
        if(right != NULL){
            tail->next = right;
        }
        return head;
    }
    
    int main(){
        list ll;

        
        
        ll.push_front(1);
        
        ll.push_front(2);

        
        ll.push_front(3);
        
        
        ll.push_front(4);
        
        printlist();
        
        ll.zigzagll(ll.head);
        printlist();
   
    }
};