#ifndef HASHTABLECLASS_H
#define HASHTABLECLASS_H

#define size 5

class hashTableClass{
private:	
	
	int hashKey;
	int value;
	hashTableClass *nextChain;
public:	
	
	hashTableClass(){
		hashKey = NULL;
		value = NULL;
		nextChain = nullptr;
	}

	~hashTableClass(){
		std::cout << "Destructor of hashTableClass has been called! "<< std::endl;	
	};
	
	int getHash(int x);
	void showTable(hashTableClass *hashTablePointer);
	hashTableClass* inputElement(hashTableClass *hashTablePointer);
	hashTableClass* findElement(hashTableClass *hashTablePointer);
	hashTableClass* deleteElement (hashTableClass *hashTablePointer);
};

#endif HASHTABLECLASS_H