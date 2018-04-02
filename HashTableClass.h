#ifndef HASHTABLECLASS_H
#define HASHTABLECLASS_H
#include <iostream>
using namespace std;

#define size 12

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
		cout << "Destructor of hashTableClass has been called! "<< endl;	
	};
	
	int getHash(int x);
	void showTable(hashTableClass *hashTablePointer);
	hashTableClass* inputElement(int input,hashTableClass *hashTablePointer);
	hashTableClass* findElement(int input,hashTableClass *hashTablePointer);
	hashTableClass* deleteElement (int input,hashTableClass *hashTablePointer);
	
	void Test_inputElement(hashTableClass *hashTablePointer);
};

#endif HASHTABLECLASS_H