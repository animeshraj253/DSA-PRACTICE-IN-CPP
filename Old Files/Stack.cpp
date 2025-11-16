#include<iostream>

using namespace std;

class node
{
	public:
		int key;
		int data;
		node * next;
		
		node()
		{
			key = 0;
			data = 0;
			next = NULL;
		}
		node(int k, int d)
		{
			key = k;
			data = d;
		}
};

class stack
{
	public:
		node * top;
		stack()
		{
			top = NULL;
		}
		
		bool isEmpty()
		{
			if (top == NULL)
				return true;
			else 
				return false;
		}
		
		bool checkIfNodeExist(node *n)
		{
			node *temp = top;
			bool check = false;
			while (temp != NULL)
			{
				if (temp->key == n->key)
				{
					check = true;
					break;
				}
				temp = temp->next;
			}
			return check;
		}
		
		void push(node *n){
			if (top == NULL)
			{
				top = n;	
			}
			else if(checkIfNodeExist(n))
			{
				cout<<"Node already exist"<<endl;
			}
			else
			{
				node *temp = top;
				top = n;
				n->next = temp;
				cout<<"Push operation successful\n";
			}
			
		}
};

int main()
{
	stack s1;
	int option, key, data;
	
	do
	{
		cout<<"Enter any option. Enter 0 to exit\n";
		cout<<"1. push()\n"
			<<"2.pop()\n"
			<<"3.isEmpty()\n"
			<<"4.peek()\n"
			<<"5.count()\n"
			<<"6.display()\n"
			<<"7.Clear Screen"<<endl<<endl;
		cin>>option;
		
		node *new_node = new node();
		
		switch(option)
		{
			
			case 0:
				break;
			case 1:
				cout<<"Enter key and node value to push\n";
				cin>>key>>data;
				new_node -> key = key;
				new_node -> data = data;
				
				s1.push(new_node);
				break;
	
				
				
		}
		
	}while(option != 0);
}
