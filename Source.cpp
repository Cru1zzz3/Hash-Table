#include <iostream>
#include "hashTableClass.h"

using namespace std;

int main(){

	int input;
	hashTableClass *hashTable = new hashTableClass[size]();

	
	
	
	do {	
		cout << "Choose option: " << endl << "0. Exit program \n 1. Input element \n 2. Find element \n 3. Delete element \n 4. Show element" << endl;
		cout << "My option is: ";
		cin >> input;
		cout << endl;


		hashTableClass *hashTablePointer = hashTable;
		

		switch (input){
			case 0: 
				break;
			case 1:
				hashTablePointer = hashTable->inputElement(hashTablePointer);
				break;
			case 4: 
				 hashTable->showTable(hashTable);
				break;
			default:
				cout << "Incorrect option. Please try again" << endl;
				input = -1;
				break;
		}

	} while (input != 0);
	
	
		
	delete [] hashTable;

	return 0;
};