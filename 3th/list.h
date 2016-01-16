#ifndef LIST_H
#define LIST_H

// struct NODE;
typedef struct NODE Node;
struct NODE
{
	int element;
	struct NODE *next;
} ;

Node *listCreat( Node * header);
void listPrint(Node * header);

#endif
