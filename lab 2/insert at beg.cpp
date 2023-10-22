#include<iostream>
using namespace std;
class Node{
	private:
		int data;
		Node *next;
		public:
			Node *head;
			Node()
			{
				head=NULL;
			}
			void ins_beg(int value)
			{
				if(head==NULL)
				{
					head=new Node;
					head->data=value;
					head->next=NULL;
				}
				else
				{
					Node *p;
		
					
					p=new Node;
					p->data=value;
					p->next=head;
					head=p;
					
				}
			}
			void display()
			{
				Node *ptr;
				ptr=head;
				if(ptr==NULL)
				{
					cout<<"empty "<<endl;
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
	n.ins_beg(1);
	n.ins_beg(2);
	n.ins_beg(20);
	n.display();
	return 0;
}