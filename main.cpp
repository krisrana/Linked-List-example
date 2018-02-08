/*
     Name:      Krishna rana 
     Course:    CIS 260 ME1
     Date:      03/01/2017
     Program:   Learning Linked list
     Description: An employer would like to maintain a linked list for employees, the data
     			stored is Employee Id(positive integer), and a yearly salary(float). The
     			program consists of classes header file and implementation files for class
     			node and linklist and a main client file for menu for selection.
*/
#include <iostream>//Standard Input/output streams libary
#include <cstdlib>//general purpose function are defined in this header
#include "linkList.h"//header file for class linklist.
using namespace std;//standard namespace
//function prototype
void menu(linkList &);
//Main() Function Defination
//This function runs the whole program with step by step intruction written below.
//main() has calls and parameters of other function in the program.
int main()
{
	//Local Definations/ Declarlations
	//Initialization of class object
	linkList list;
	//function call
	menu(list);
	return 0;
}
//menu() Function Defination
//This function has the menu choices to run the program based on user input.
//menu() has class linklist as a parameter and function type is void, it does not return
//anything.
void menu(linkList &list)
{
	//Local Definations/ Declarlations
	char input;
	//condition runs once for menu choice from user.
	do{
		//system has clear screen
		system("CLS");
		cout<<"\t\t\tMain Menu\n\n";
		cout<<"\t\t1- (I)nsert\n";
		cout<<"\t\t2- (R)emove\n";
		cout<<"\t\t3- (D)isplay\n";
		cout<<"\t\t4- (C)lear\n";
		cout<<"\t\t5- (E)xit\n";
		cout<<"\n\t\tPlease input your choice: ";
		cin>>input;//user input
		input = toupper(input);//toupper capitalize the input
		cin.ignore();
		//swtich case to run functions based on user input
		switch(input)
		{
			case '1':
			case 'I':list.insert();//case I will insert in begining
				break;
			case '2':
			case 'R':list.remove();//case R will remove last entry
				break;
			case '3':
			case 'D':list.display();//case D will display with assistance from print().
				cin.get();
				break;
			case '4':
			case 'C':list.clear();//will clear the whole list to NULL.
				cin.get();
				break;
		}
	//other inputs are ignored
	}while((input !='5') && (input != 'E'));
}
