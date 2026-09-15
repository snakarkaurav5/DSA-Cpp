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
        node* slow = head;
        node* fast = head;
        node* prev = NULL;

        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if(prev != NULL){
            prev->next = NULL;
        }

        return slow;
    }


    node* merge(node* left, node* right){

        list ans;

        node* i = left;
        node* j = right;

        while(i != NULL && j != NULL){

            if(i->data <= j->data){
                ans.push_back(i->data);
                i = i->next;
            }
            else{
                ans.push_back(j->data);
                j = j->next;
            }
        }

        while(i != NULL){
            ans.push_back(i->data);
            i = i->next;
        }

        while(j != NULL){
            ans.push_back(j->data);
            j = j->next;
        }

        return ans.head;
    }


    node* mergesort(node* head){

        if(head == NULL || head->next == NULL){
            return head;
        }

        node* righthead = splitATmid(head);

        node* lefthead = mergesort(head);
        righthead = mergesort(righthead);

        return merge(lefthead, righthead);
    }

};


int main(){

    list ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);

    ll.printlist();

    ll.head = ll.mergesort(ll.head);

    ll.printlist();

}