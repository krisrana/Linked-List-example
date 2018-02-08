#include <iostream>
using namespace std;

#ifndef NODE_H
#define NODE_H

class Node
{
	private:
		unsigned int id;
		float salary;
		Node* next;
	public:
		Node(){	};
		void setnode(unsigned int EmpId, float EmpSal);
		void setnext(Node *link);
		void getnode() const;
		Node* nextNode()
		{
			return next;
		}
		~Node(){ };
};

#endif
