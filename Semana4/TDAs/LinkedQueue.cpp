#include "LinkedQueue.h"

#define NULL 0

LinkedQueue::LinkedQueue()
{
	frente = NULL;
	final=NULL;
}

LinkedQueue::~LinkedQueue()
{
	if(final)
		delete final;
}