//Recursive Traversing
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
void printList(Node *head);
int main()
{
	Node *head=new Node(10);
	/*Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->next=temp2;*/
	head->next=new Node(20);
	head->next->next=new Node(30);
	printList(head);
}
void printList(Node *head)
{
	if(head==NULL)
	return;
	cout<<head->data<<" ";
	printList(head->next);
}
