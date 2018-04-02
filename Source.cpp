#include <iostream>
#include <conio.h>
#include "hashTableClass.h"

using namespace std;

int main(){

	int input,option;
	hashTableClass *hashTable = new hashTableClass[size]();
	
	do {	
		cout << endl << "Choose option: " << endl << "0. Exit program \n 1. Input element \n 2. Find element \n 3. Delete element \n 4. Show hash table \n " << endl;   
		cout << "Test methods: " <<  "11. Test method '1.Input element'" <<  endl << endl;
		

		cout << "My option is: ";
		cin >> option;
		cout << endl;

		hashTableClass *hashTablePointer = hashTable;

		switch (option){
			case 0: 
				break;
			case 1:
				cout << "Input your value: ";
				cin >> input ;
				hashTablePointer = hashTable->inputElement(input,hashTablePointer);
				break;
			case 2: 
				cout << "Find element: ";
				cin >> input ;
				hashTablePointer = hashTable->findElement(input,hashTablePointer);
				break;
			case 3:
				cout << "Delete element: ";
				cin >> input ;

				hashTablePointer = hashTable->deleteElement(input,hashTablePointer);
				break;
			case 4: 
				 hashTable->showTable(hashTable);
				break;
			

			case 11:
				hashTable->Test_inputElement(hashTable);
				break;
			default:
				cout << "Incorrect option. Please try again" << endl;
				input = -1;
				break;
		}

	} while (option != 0);
			
	delete [] hashTable;
	cout << endl << "Press any button to exit" << endl;
	//getch();

	return 0;
};