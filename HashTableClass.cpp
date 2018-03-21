#include <iostream>
#include "hashTableClass.h"

using namespace std;

int hashTableClass::getHash(int hash){
	
	hash = hash % size;

	return (hash);
};

void hashTableClass::showTable(hashTableClass *hashTable){

	cout << "Hash table is: "<< endl;	

	for (hashTableClass *hashTablePointer = hashTable; hashTablePointer != hashTable + size ; hashTablePointer++){
		
		cout << hashTablePointer-> hashValue << endl;
	
	}
	
	
};

void hashTableClass::inputElement(hashTableClass *hashTable){

	hashTableClass *hashTablePointer = hashTable;

	//hashTablePointer ->hashValue  = 

};
