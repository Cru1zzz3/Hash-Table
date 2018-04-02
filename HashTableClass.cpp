#include <iostream>
#include "hashTableClass.h"
#include <cassert>


#define TESTVALUE 100

using namespace std;

int hashTableClass::getHash(int hash){

	hash = hash % size;

	if (hash < 0)
		hash = -hash;

	return (hash);
};

hashTableClass* hashTableClass::inputElement(int input,hashTableClass *hashTablePointer){

	hashKey = getHash(input);
	
	hashTablePointer = hashTablePointer + hashKey;
	hashTablePointer->hashKey = hashKey;
	
	while(hashTablePointer->nextChain != nullptr){
		hashTablePointer = hashTablePointer ->nextChain;
		if (hashTablePointer->value == input){
			cout << "Element with value " << input << " already exists!" << endl;
			return(hashTablePointer);
		}
	}
	
		hashTableClass *newChainElement = new hashTableClass();
		hashTablePointer->nextChain = newChainElement;

		newChainElement -> hashKey = hashKey;
		newChainElement -> value = input;
		newChainElement -> nextChain = nullptr;

		cout << "New element with value " << newChainElement->value
		<< " successfully added! \t Hash is: " << hashKey <<endl << endl;

	return (hashTablePointer);	
};

void hashTableClass::Test_inputElement(hashTableClass *hashTable){
	hashTableClass *currentElement = hashTable;
	for (int input = -(TESTVALUE); input != TESTVALUE; input++){
		currentElement->inputElement(input,currentElement);
			}
	
};


hashTableClass* hashTableClass::findElement(int input,hashTableClass *hashTablePointer){
	
	bool find = false;

	hashKey = getHash(input);

	hashTablePointer = hashTablePointer + hashKey;
	hashTablePointer ->hashKey = hashKey;

	while ((hashTablePointer ->nextChain != nullptr) && (find == false)){
		hashTablePointer = hashTablePointer -> nextChain;
		if (hashTablePointer -> value == input){
			find = true;
			break;
		}
	};
	
	if (find){
		cout << "Element with value " << input << " successfully found!" << endl
			 << "Value: " << hashTablePointer->value << "\t Hash key: "<< hashTablePointer ->hashKey << endl
			 << "Next chain: " << hashTablePointer->nextChain << endl;
		return hashTablePointer;
	}
	else {
		cout << "Element with value " << input << " is not found!" << endl ;
		return hashTablePointer;
	}
};

hashTableClass* hashTableClass::deleteElement (int input,hashTableClass *hashTablePointer){
	
	bool deleted = false;

	hashKey = getHash(input);

	hashTablePointer = hashTablePointer + hashKey;
	hashTablePointer ->hashKey = hashKey;

	while ((hashTablePointer ->nextChain != nullptr) && (deleted == false)) {
		
		hashTableClass *previousChain = hashTablePointer;
		hashTablePointer = hashTablePointer -> nextChain;

		if (hashTablePointer -> value == input){
			
			hashTableClass *deleteChain = previousChain->nextChain;

			previousChain->nextChain = deleteChain->nextChain;
			
			delete deleteChain;
			deleted = true;
			break;
		}
	};
	
	if (deleted){
		cout << "Element with value " << input << " successfully deleted!" << endl;
		return hashTablePointer;
	}
	else {
		cout << "Delete error! Element with value " << input << " is not found!" << endl ;
		return hashTablePointer;
	}
	

};

void hashTableClass::showTable(hashTableClass *hashTablePointer){

	cout << "Hash table is: "<< endl;

	hashTablePointer->hashKey = NULL;

	for (int i=0; i != size; i++){ 

		hashTableClass *chainPointer = hashTablePointer;

		cout << "Hash key "<< i << ": \t";

		if (chainPointer ->nextChain != nullptr){
		chainPointer = chainPointer ->nextChain;

			while (chainPointer != nullptr){
					cout << chainPointer->value ;
					if (chainPointer->nextChain != nullptr) {
						cout << " -> ";
					}
				chainPointer = chainPointer ->nextChain;
			}
		}
			cout << endl << endl;
			hashTablePointer ++;
			
	}
	cout << endl;
};