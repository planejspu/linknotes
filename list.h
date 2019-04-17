#ifndef LIST_H
#define LIST_H

#include "object.h"
// abstract data type 
#include <string>
#include <iostream>
using std::string;
using std::istream;
using std::ostream;

class List : public Object{
private:
	size_t _size; // all list have a size 
public:
	List(); // not virtual pure
	virtual ~List(); // not virual pure
	virtual bool Insert(Object* element, size_t position) = 0;
	virtual int IndexOf(Object* element)const = 0;
	virtual Object* Remove(size_t position) = 0; // return the object
	virtual Object* Get(size_t position) = 0; // return the object 
	virtual string ToString()const = 0;
	virtual ostream& Write(ostream&)const = 0;
	virtual istream& Read(istream&) = 0;
	size_t Size()const;  // not virtual pure 
	bool IsEmpty()const; // not virtual pure 
	virtual void Clear() =0  ; 
 	// =0 means that it is pure 
		// Virtual activated the polymorphism 

};


#endif
