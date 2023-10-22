#include<iostream>
using namespace std;
class Node{
	private:
		int data;
		Node *next, *prev;
		public:
			Node *head;
			Node()
			{
				head=NULL;
			}
			void ins_end(int value)
			{
				if(head==NULL)
				{
					head=new Node();
					head->data=value;
					head->prev=NULL;
					head->next=NULL;
					
				}
				else
				{
					Node *p;
					p=new Node;
					p->data=value;
					p->next=NULL;
					head->prev=p;
					head->next=p;
				}
			}
			void display()
			{
				Node *ptr;
				ptr=head;
				if(ptr==NULL)
				{
					cout<<"doubly linked list is empty "<<endl;
				}
				else
				{
					while(ptr!=NULL)
					{
						cout<<ptr->data<<endl;
						ptr=ptr->next;
					}
				
				}
			}
};
int main()
{
	Node n;
	n.ins_end(1);
	n.ins_end(20);
	n.display();
	return 0;
}
