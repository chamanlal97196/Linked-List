#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next =NULL;
	}
};

Node *insertAtEnd(Node *head, int x){
	Node *curr=head;
	Node *temp = new Node(x);
	while(curr!=NULL && curr->next!=NULL){
		curr= curr->next;
	}
	curr->next = temp;
	return head;
}
	


void rPrint(Node *head){
	if(head == NULL) return;
	else{
		cout<<head->data<<" ";
		rPrint(head->next);
	}
}
void printList(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
		
	}
}

int main()
{
	// std::cout << "Hello, World" << std::endl;
	Node *head=new Node(10);
	head->next = new Node(20);
	head->next->next= new Node(30);
	
	head=insertAtEnd(head, 35);
	head=insertAtEnd(head, 36);
	rPrint(head);// using recursion 
	cout<<endl;
	printList(head); // using iteration loop
	return 0;
}
