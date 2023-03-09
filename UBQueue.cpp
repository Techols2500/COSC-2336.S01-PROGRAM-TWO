//************************************************************************** 
//
// Programming Excerise 2   
// CLASS: COSC 2336.S01
// AUTHOR: TYLER ECHOLS 
// DAtE: Sep 2017  
//
//************************************************************************** 

#include "UBQueue.h" 

#include <iostream> 

using namespace std;

UBQueue::UBQueue()
{

}

UBQueue::~UBQueue()
{
	DeleteAll();
}

void UBQueue::queue(string s) // Adds in whatever letter you input in whatever order it's been put in 
{
	if (pHead)
	{
		WCS_Pointer <Node> pNode;
		pNode = WCS_Pointer <Node>(new Node((*pTail).index + 1));
		numElements++;
		(*pNode).pPrev = pTail;
		(*pTail).pNext = pNode;
		pTail = pNode;
		(*pTail).Data = s;

	}
	else
	{
		WCS_Pointer <Node> pNode;
		pNode = WCS_Pointer <Node>(new Node(0));
		numElements++;
		pHead = pNode;
		pTail = pNode;
		(*pHead).Data = s;
		(*pTail).Data = s;
	}
}

string UBQueue::deQueue() //Removes whatever is in the list in the order it has been inputed
{
	if (pHead)
	{
		string s = (*pHead).Data;
		Remove((*pHead).index);
		return s;
	}
	else
	{
		return "Nothing to remove ";

	}
}

