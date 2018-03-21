#ifndef HASHTABLECLASS_H
#define HASHTABLECLASS_H

#define size 5


class hashTableClass{
private:	
	
public:	
	int *nextChain;

	int hashValue;
	int getHash(int x);
	void showTable(hashTableClass *hashTable);
	void inputElement(hashTableClass *hashTable);
};

#endif HASHTABLECLASS_H