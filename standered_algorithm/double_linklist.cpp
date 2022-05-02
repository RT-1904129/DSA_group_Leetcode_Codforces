#include <bits/stdc++.h>
using namespace std;

struct doubleLinklist{
    int val;
    doubleLinklist* forward;
    doubleLinklist* backward;
    
};

struct doubleLinklist* create(int val){
    struct doubleLinklist* new_element = new doubleLinklist;
    new_element->val = val;
    new_element ->forward = NULL;
    new_element->backward = NULL;
    return new_element;
}

void insert(doubleLinklist* &first_element,int val){
    struct doubleLinklist* new_element = create(val);
    first_element->forward = new_element;
    new_element->backward = first_element;
    first_element = first_element->forward;
}

void delete_node(doubleLinklist*& head,doubleLinklist* &tail,int val){
    doubleLinklist* head1 = head;
    doubleLinklist* tail1 = tail;
    if(head == tail){
        if(head->val == val){
           doubleLinklist* temp = head;
           head = NULL;
           tail= NULL;
           delete temp;
        }
    }
    else if(head->val == val){
        doubleLinklist* temp = head;
        head= head->forward;
        head->backward = NULL;
        delete temp;
    }
    else if(tail->val == val){
        doubleLinklist* temp = tail;
        tail= tail->backward;
        tail->forward= NULL;
        delete temp;
    }
    else {
        while(head1 != tail1){
            if(head1->val == val){
                doubleLinklist* temp = head1;
                doubleLinklist* prev = head1->backward;
                doubleLinklist* next = head1->forward;
                delete temp;
                prev->forward = next;
                next->backward = prev;
                break;
            }
            head1= head1->forward;
        }
    }
}
void Print(doubleLinklist* head){
     while(head){
        cout<< head->val <<" ";
        head= head->forward;
    }
    cout<<"\n";
}

int main(){
    doubleLinklist * head = create(0);
    doubleLinklist* tail = head;
    //insert(tail,1);
    delete_node(head,tail,0);
    Print(head);
}