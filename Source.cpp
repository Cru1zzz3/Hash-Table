#include <iostream>
#include "hashTableClass.h"

using namespace std;

int main(){

	hashTableClass *hashTable = new hashTableClass[size];

	hashTableClass *hashTablePointer = hashTable;
	
	
	
	
	hashTable->showTable(hashTable);

	
	delete [] hashTable;

	return 0;
};