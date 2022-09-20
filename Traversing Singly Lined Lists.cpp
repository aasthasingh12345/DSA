//Iterative Traversing
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
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->next=temp2;
	printList(head);
	printList(head);  //Two times the linked lists will be printed because two copies of head will be created 
	                    //one in the main function and one in the function 
	return 0;
}
void printList(Node *head)
{
	//Node *curr=head;
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
