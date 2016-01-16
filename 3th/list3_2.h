#ifndef LIST3_2_H
#define LIST3_2_H

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
