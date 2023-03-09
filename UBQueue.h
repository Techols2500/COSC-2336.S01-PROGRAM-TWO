//************************************************************************** 
//
// Programming Excerise 2   
// CLASS: COSC 2336.S01
// AUTHOR: TYLER ECHOLS 
// DAtE: Sep 2017  
//
//************************************************************************** 

#ifndef UB_QUEUE_H
#define UB_QUEUE_H


#include "UBArray.h"
#include <string.h> 
#include <string>  

using namespace std;

class UBQueue : public UBArray <string, int>
{
public: 

	UBQueue();
	~UBQueue();
	void queue(string);
	string deQueue();

private:

	UBQueue(const UBQueue &);

	UBQueue & operator = (const UBQueue &);



}; 

#endif
