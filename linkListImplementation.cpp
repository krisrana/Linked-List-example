#include <iostream>//Standard Input/output streams libary
#include "linkList.h"//header file for class linklist.
using namespace std;//standard namespace
//insert() Function Defination
//This function inserts data in the begining.
//it type is void, and get data from user and create node with the input.
void linkList::insert() 
{    
	//Local Definations/ Declarlations
	int Empnum;
    float sal;
	//prompt for input
  	cout<<"\t\tEmployee Id Number: ";
	cin>>Empnum;//gets employee id
	cout<<"\t\tEmployee yearly salary: ";
	cin>>sal;//gets employee salary
	//creates a new node
    Node* newnode = new Node();
    newnode->setnode(Empnum,sal);//passes input to setnode function
    newnode->setnext(head);//points newnode to next.
    head = newnode;// new next is head for new input from user.
}
//remove() Function Defination
//This function removes data which is last.
//it type is void.
void linkList::remove()
{
	//Local Definations/ Declarlations
	Node *curr = head;//sets *curr to head
	//condtion to check if curr is NUll already
	if(curr == NULL)
	{
		cout<<"\t\tList is empty\n";
		return;
	}
	//if the list has one input delete that input.
	else if(curr->nextNode() == NULL)
	{
		delete curr;
		head = NULL;
	}
	//if the list has mutiple input look for the last input and delete it.
	else
	{
		Node *prev;
		do
		{
			prev = curr;
			curr = curr->nextNode();
		}
		while(curr->nextNode() != NULL);
		prev->setnext(NULL);
		delete curr;
	}
}
//diplay() Function Defination
//This function shows data inputed by user with assistance from print
//it type is void.
void linkList::display()
{
	print(head);
}
	//print() Function Defination
	//This function send data to display function .
	//it type is void.
	void linkList::print(Node* temp)
	{	
		//if list had nothing to display
		if(head == NULL)
		{
			cout<<"\t\tlist is empty"<<endl;
		}
		//when list reaches the end of its list.
		else if(temp == NULL)
		{
			cout<<"\t\tEnd of list"<<endl;
		
		}
		//recursive call to print data untill head(temp) is NUll
		else
		{
			temp->getnode();
			print(temp->nextNode());
		}
	}
//clear() Function Defination
//This function deletes every node from list and leaves the list empty .
//it type is void.
void linkList::clear()
{
	Node *temp = head;
	while(head != NULL)
	{
		head = head->nextNode();
		delete temp;
	}
}
