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



void insert(int val,int pos){
    node* newnode=new node(val);
    node* temp=head;
    for(int i=0;i<pos-1;i++){
        if(temp==NULL){
            cout<<"pos is invalid"<<endl;
            return;
        }
        temp=temp->next;
    }
    //temp is now at position -1 tehrefore previous left
    newnode->next=temp->next;
    temp->next=newnode;
}
void pop_front(){
    if(head==NULL){
        cout<<"linked lis is empty"<<endl;
        return;
    }
    node* temp= head;
    head=head->next;
    temp->next=NULL;
    delete temp;
    
    
}
 ~list(){
    node* temp;
    while(head!=NULL){

        temp=head;
        head=head->next;
        delete temp;
    
    }
    tail=NULL;

}
void pop_back(){
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
}
int searchitr(int key){
    node* temp =head;
    int idx=0;
    while(temp==NULL){
       if (temp->data==key){
        return idx;
       }
       temp=temp->next;
       idx++;
    }
    return -1;
}
int helper(node* head,int key){
    if (head=NULL){
        return -1;
    }
    if(head->data==key){
        return 0;
    }
    int idx = helper(head->next,key);
        if(idx==-1){
            return -1;
        }
        return idx+1;
    } 

    int searchREC(int key){
        return helper(head,key);
    

    
}



};
int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);//1->2->3->null
    ll.push_back(4);
    ll.push_back(5);
    ll.printlist();//1->2->3->4->5->null
    ll.insert(10,2);
    ll.printlist();
    ll.pop_front();
    ll.printlist();
    ll.pop_back();
    ll.printlist();
    ll.searchitr(3);
    ll.printlist();
    ll.helper(0,4);
    ll.printlist();
    
    return 0;
}
