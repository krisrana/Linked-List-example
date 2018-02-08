#include<iostream>
#include "node.h"
#ifndef LINKLIST_H
#define LINKLIST_H

using namespace std;

class linkList
{
	private:
		Node* head;
	public:
		linkList()
		{
			head = NULL;
		}
		void insert();
		void remove();
		void display();
			void print(Node*);
		void clear();
		~linkList(){ }
};

#endif

