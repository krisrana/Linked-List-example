#include <iostream>
#include "Node.h"

using namespace std;


void Node::setnode(unsigned int EmpId, float EmpSal)
{
	id = EmpId;
	salary = EmpSal;
}

void Node::setnext(Node* link)
{
	next = link;
}

void Node::getnode() const
{
	cout<<"\t\tEmployee Id Number: "<<id<<"\t\tEmployee yearly salary: "<<salary<<endl;
}
