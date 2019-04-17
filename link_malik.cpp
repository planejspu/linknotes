#include <iostream> 

using namespace std; 

class linkedList{ 
	struct Node { 
		int data; 
		Node * next; 
	} ; 
	protected: 
	int _count; 
	Node * _head= new Node; 
	Node * _tail = new Node; 
	public: 
linkedList() ; 
void initializeList(); 
void destroyList(); 
bool insertNode(int n); 
bool isEmptyList() const; 
void print() const; 
int length() const; 
} ;

bool linkedList::insertNode(int n) 
{ 

	Node *temp = new Node; 
	Node *neo= new Node; 
	temp->data = n; 
	temp->next=NULL; 

	// insert into an empty list
	if (_head == NULL) 
	
	{ 
		_head = temp; 
		_tail = temp; 
		
	}
	else { 
		_tail->next= temp; 
		_tail= temp; 
	} 	

		
		
} 

void linkedList::destroyList() 
{ 
	Node *temp = new Node; 

	while (_head != nullptr) 
	{ 
		temp = temp->next; 
		_head = _head->next; 
		delete temp; 
	} 
	_tail = nullptr; 
	_count =  0 ; 
};

void linkedList::initializeList() 
{ 
	destroyList() ; 
};  
linkedList::linkedList() 
{ 
	_head = NULL; 
	_tail = NULL; 
	_count = 0 ; 
} ;

void linkedList::print() const
{
       Node * _curr = new Node; 
	_curr = _head; 
	int _count = 0 ; 
	if (_curr== NULL) { 
		cout << "List is empty" << endl; 

	}  ; 
	while (_curr != NULL ) 
	{ 
		cout << _curr->data << endl; 
		_curr = _curr->next; 
		_count++; 
	}; 
       cout << "Size of the list: " << _count << endl; 	
	
} ; 

int main() { 

	linkedList a;
	a.print(); 
	a.insertNode(123); 
	a.insertNode(444); 
	a.print(); 

} 
