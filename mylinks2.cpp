#include <iostream> 

using namespace std; 

class linkedlist
{ 
struct node { 
	int data; 
	node *next; 
} ; 

	
void addNode(int n) 
{ 


node *temp=new node; 
temp->data=n; 
temp->link=NULL; 


if (head == NULL) 
{ 
	head = temp; 
	tail = temp; 
} 
else 
{
       tail->next=temp; 
	tail = temp; 
} 	

} 
}; 
int main(int argc, char *argv[]) 
{ 

       	


} 
