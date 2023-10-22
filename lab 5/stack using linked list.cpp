#include<iostream>
using namespace std;
class node{
	private:
		int data;
		node*next;
	public:
		node *top;
		node()
		{
			top=NULL;
		}
		void push(int val)
		{
			if(top==NULL)
			{
				node *temp=new node();
				temp->data=val;
				temp->next=NULL;
				top=temp;
			}
		}
		void pop()
		{
			if(top==NULL)
			{
				cout<<"stack is underflow";
			}
			cout<<"poped elements are "<<top->data<<endl;
			top=top->next;
			}
		
		void display()
		{
			if(top==NULL)
			{
				cout<<"stack is empty"<<endl;
			}
			else
			{
				node*ptr;
				ptr=top;
				while(ptr!=NULL)
				{
					cout<<ptr->data;
					ptr=ptr->next;
				}
			}
			cout<<endl;
		}
	};		

int main()
{
	node n;
	int ch,val;
	cout<<"1)press  for push elements "<<endl;
	cout<<"2)press  for pop elements "<<endl;
	cout<<"3)press  for display elements "<<endl;
	cout<<"4)press  for exit "<<endl;
	do{
		cout<<"enter choice "<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				{
					cout<<"enter pushed elements "<<endl;
					cin>>val;
					n.push(2);
					break;
				}
			case 2:
				{
					cout<<"enter poped elements "<<endl;
					cin>>val;
					n.pop();
					break;
				}
			case 3:
				{
					cout<<"display elements "<<endl;
					n.display();
					break;
				}
				case 4:
				{
					cout<<"exit "<<endl;
					break;
				}
				default:
				{
					cout<<"invalid choice "<<endl;
					}	
		}
	}
	while(ch!=4);
	return 0;
	
	
	
	
	
	
}