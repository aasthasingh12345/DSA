//Insert at the begining of the singly linked lists
#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node(int x)
	{
		data=x;
		next=NULL;
	}
};
Node *insertBegin(Node *head,int x);
void printList(Node *head);
int main()
{
	int x;
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head=insertBegin(head,40);
	cout<<"Enter the element to be inserted:"<<endl;
	cin>>x;
	head=insertBegin(head,x);
	printList(head);
	return 0;
}
Node *insertBegin(Node *head,int x)
{
	Node *temp=new Node(x);
	temp->next=head;
	return temp;
}
void printList(Node *head)
{
	Node *curr=head;
	while(curr!=NULL)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}

