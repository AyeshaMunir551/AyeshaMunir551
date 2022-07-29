#include<iostream>
using namespace std;
Class Linkedlist{
         private:
              Node*head;
         public:
              Linkedlist(){
              head=NULL;
              }
           bool isEmpty(Node*head){
            return(head==NULL);
           }
           bool InsertAtBegin(int val){
            if(isEmpty())
           head=new Node(val);
          else 
            Node*t=new Node(val);
             t->setNext(head);
              head=t;
             }
            bool removeFromBegin(int val){
              if(isEmpty)
                  return false;
               else
                   delete head;
              }
            bool removeFromLast(){
               Node*t1=head;
               Node*t2=head->getNext();
            while(t2->getNext()!=NULL){
               t1=t1->getNext();
               t2=t2->getNext();
              }
               delete t2;
               t1->setNext(NULL);
              }
            int getlength(){
               Node*temp=head;
                int i=1;
              while(temp!=NULL){
                temp=temp->getNext();
                 i++;
                }
                 return i;
                }
              int getFirstElement(){
                Node*t=t->getNext(head);
                    t=head;
                }
       


        
   
             
