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
		void inert_end(int value)
		{
			if(head==NULL)
			{
			//	cout<<"linked list is empty"<<endl;
			
			
			
				head=new Node;
				head->data=value;
				head->next=NULL;
				
			
			}
			else
			{
				Node *p, *ptr;
				ptr=head;
					while(ptr->next!=NULL){
					
					ptr=ptr->next;
				}
				p=new Node;
				p->data=value;
				p->next=NULL;
      			ptr->next=p;
			}
		}
		void display()
		
		{
			Node *ptr;
			ptr=head;
				if(ptr==NULL)
			{
				cout<<"linked list is empty"<<endl;
			}
			else
			{
				while(ptr!=NULL){
					cout<<ptr->data<<endl;
					ptr=ptr->next;
				}
				
			}
			
		}
	};
	int main()
	{
		Node n;
		n.inert_end(1);
		n.inert_end(2);
		n.inert_end(3);
		n.inert_end(20);
		n.display();
		
		
		return 0;
				}			
			
			
			
			
			
			
			
			
