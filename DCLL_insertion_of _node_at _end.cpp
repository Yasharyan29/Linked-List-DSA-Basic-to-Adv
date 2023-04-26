#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*prev;
};

void insertion_at_end(node**last){
    node*temp = new node();
    node*p = (*last) -> next;
    temp ->data = 400;
    temp -> next = p;
    temp -> prev = (*last);
    p->prev = temp;
    (*last) -> next = temp;
    (*last) = temp;
}

void display(node*last){
    node*temp= last;
    do{
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    while(temp != last);
}

int main(){
    node*head=NULL;    
    node*second=NULL;    
    node*third=NULL;

    head = new node();    
    second = new node();    
    third = new node();

    head -> data =10;
    head -> next = second;
    head -> prev = third;

    second -> data = 20;
    second -> next = third;    
    second -> prev = head;

    third -> data = 30;    
    third -> next = head;    
    third -> prev = second;  

    //function call
    insertion_at_end(&third);
    display(head);
    return 0;  
}