#include<iostream>
using namespace std;
struct node{
        int data;
        node *next;
};
class list
{
        private:
        node *head, *tail;
        public:
        list()
        {
                head=NULL;
                tail=NULL;
        }
        void createnode(int value)
        {
                node *temp=new node;
                temp->data=value;
                temp->next=NULL;
                if(head==NULL)
                {
                        head=temp;
                        tail=temp;
                        temp=NULL;
                }
                else
                {
                        tail->next=temp;
                        tail=temp;
                }
        }
        void display()
        {
                node *temp=new node;
                temp=head;
                while(temp!=NULL)
                {
                        cout<<temp->data<<"\t";
                        temp=temp->next;
                }
        }
        void insert_start(int value)
        {
                node *temp=new node;
                temp->data=value;
                temp->next=head;
                head=temp;
        }
        void insert_position(int position, int value)
        {
                node *pre=new node;
                node *cur=new node;
                node *temp=new node;
                cur=head;
                for(int i=1;i<position;i++)
                {
                        pre=cur;
                        cur=cur->next;
                }
                temp->data=value;
                pre->next=temp;
                temp->next=cur;
        }
        void delete_first()
        {
                node *temp=new node;
                temp=head;
                head=head->next;
                delete temp;
        }
        void delete_last()
        {
                node *cur=new node;
                node *pre=new node;
                cur=head;
                while(cur->next!=NULL)
                {
                        pre=cur;
                        cur=cur->next;
                }
                tail=pre;
                pre->next=NULL;
                delete cur;
        }
        void delete_position(int pos)
        {
                node *cur=new node;
                node *pre=new node;
                cur=head;
                for(int i=1;i<pos;i++)
                {

                        pre=cur;
                        cur=cur->next;
                }
                pre->next=cur->next;
                delete cur;
        }
};
int main()
{
        list obj;
        obj.createnode(25);
        obj.createnode(50);
        obj.createnode(90);
        obj.createnode(40);
        obj.insert_start(36);
        obj.insert_position(4,69);
        obj.delete_first();
        obj.delete_position(2);
        obj.display();
        return 0;
}
