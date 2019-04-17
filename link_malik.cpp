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
bool removeNode(int pos); 
bool isEmptyList() const; 
void print() const; 
int length() const; 
} ;

bool linkedList::removeNode(int pos) 
{ 

	Node *temp = new Node; 
	Node *neo = new Node; 

	Node *prev= new Node; 
	Node *curr= new Node; 
	temp = _head; 
	neo = _head; 
	
	if (_head == NULL) 
	{ 
		cout << "Cannot delete from an empty list" << endl ; 
	} 

	if (pos == 0) 
	{ 
		temp=temp->next; 
		_head = temp; 

			
	}  
	
	else { 
		for (int i = 0; temp !=NULL && i<pos-1; i++) 
	{ 
		temp= temp->next;

	}
	       neo=temp->next->next; 
       		temp->next = neo; 	       

		       	
	}; 


};  

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
		_tail->next = temp; 
		_tail=temp; 

		
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
	a.insertNode(1); 
	a.insertNode(2); 
	a.insertNode(3); 
	a.insertNode(4); 
	a.insertNode(5); 
	a.insertNode(6); 
	a.removeNode(0); 
	a.print(); 


} 
