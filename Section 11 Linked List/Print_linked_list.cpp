#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data ;
    struct Node *next;    
};


void display(struct Node *first){
  
  while(first!=NULL){
    cout<<first->data<<endl;
    first = first->next;
  }

}

// recursive function for displaying linked list

void rdisplay(struct Node *first){
  // cout<<"This is recursive function for printing linked list";
  if(first!=NULL){
    cout<<first->data<<endl;
    rdisplay(first->next); 
  }
}

int main()
{
     struct Node *first=NULL,*last, *neww;

     first = new Node;
     first->data = 23;
    //  first->next = NULL;
     last = first;

     neww = new Node;
     last->next = neww;
     neww->data = 53;
    //  neww->next = NULL;
     last = neww;

     neww = new Node;
     last->next = neww;
     neww->data = 5753;
     neww->next = NULL;
     last = neww;

  display(first) ;
  rdisplay(first) ;

    return 0;
}