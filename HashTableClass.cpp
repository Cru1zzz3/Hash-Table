#include <iostream>
#include "hashTableClass.h"

using namespace std;

int hashTableClass::getHash(int hash){
	
	hash = hash % size;

	return (hash);
};

void hashTableClass::showTable(hashTableClass *hashTablePointer){

	

	cout << "Hash table is: "<< endl;

	/*
	cout << chainPointer->hashKey << " ";
	while (hashTablePointer->hashKey != size)
	{
		

		if (chainPointer->nextChain != nullptr){

			chainPointer = chainPointer ->nextChain;
			cout << chainPointer->value << " " ;
		}
		else {
			cout << endl;
			chainPointer = hashTablePointer++;
		};
	}
	


	*/

	hashTablePointer->hashKey = NULL;

	
	for (int i=0; i != size; i++){ 


		hashTableClass *chainPointer = hashTablePointer;

		cout << i << " ";

		if (chainPointer ->nextChain != nullptr){
		chainPointer = chainPointer ->nextChain;

			while (chainPointer != nullptr){
				cout << chainPointer->value << " ";
				chainPointer = chainPointer ->nextChain;
			}
		}
			cout << endl;
			hashTablePointer ++;
			
	}
	cout << endl;
};

hashTableClass* hashTableClass::inputElement(hashTableClass *hashTablePointer){

	int input;
	cout << "Input your value: ";
	cin >> input ;

	

	hashKey = getHash(input);

	
	hashTablePointer = hashTablePointer + hashKey;
	hashTablePointer->hashKey = hashKey;
	
	
	
	
	while(hashTablePointer->nextChain != nullptr){
		hashTablePointer = hashTablePointer ->nextChain;
		}

	hashTableClass *newChainElement = new hashTableClass();
	hashTablePointer->nextChain = newChainElement;

	newChainElement -> hashKey = hashKey;
	newChainElement -> value = input;
	newChainElement -> nextChain = nullptr;

	cout << "New element with value " << newChainElement->value<< " successfully added! \t Hash is: " << hashKey <<endl << endl;
	return (hashTablePointer);	
};
