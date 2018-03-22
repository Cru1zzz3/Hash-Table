#ifndef HASHTABLECLASS_H
#define HASHTABLECLASS_H

#define size 5


class hashTableClass{
private:	
	
	int hashKey;
	int value;
	hashTableClass *nextChain;

public:	

	
	int getHash(int x);
	void showTable(hashTableClass *hashTable);
	hashTableClass* inputElement(hashTableClass *hashTable);
};

#endif HASHTABLECLASS_H