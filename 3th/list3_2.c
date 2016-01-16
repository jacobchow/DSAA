#include <stdio.h>
#include <stdlib.h>
#include "list3_2.h"

int main()
{
	int count;
	Node *L = NULL;
	Node *P = NULL;
	Node *Lpos, *Ppos;
	printf("Input list L:\n");
	L = listCreat( L );
	printf("Input list P:\n");
	P = listCreat( P );

	Lpos = L;
	Ppos = P;
	count = 1;
	while (Lpos != NULL && Ppos != NULL)
	{
		if( Ppos -> element == count++ )
		{
			printf("L中第%d个数是%d \n",count-1, Lpos -> element );
			Ppos = Ppos -> next;
		}
		Lpos = Lpos -> next	;
	}
//	printf("\n");
	return 1;
}

Node *listCreat( Node * header)
{
	Node *tmpNode, *pos;
	tmpNode = malloc( sizeof( Node ) );
	if( tmpNode == NULL)
	{
		printf("Out of space!\n");
		return NULL;
	}
	scanf( "%d", &tmpNode -> element);
	while( tmpNode -> element > 0)
	{
		if (header == NULL)
		{				//空表
			header = tmpNode;
		}
		else
		{
			pos -> next = tmpNode;
		}
		pos = tmpNode;
		pos -> next = NULL;

		tmpNode = malloc( sizeof( Node ) );
		if( tmpNode == NULL)
		{
			printf("Out of space!\n");
			return NULL;
		}
		scanf( "%d", &tmpNode -> element);
	}
	free( tmpNode );
	return header;
}

void listPrint(Node * header)
{
	Node *tmp = header;
	if(header == NULL)
	{
		printf("The list is empty!\n");
		return;
	}
	printf("%d  ", tmp -> element );
	while( tmp -> next != NULL)
	{
		printf("%d  ", tmp -> next -> element );
		tmp = tmp -> next;
	}
	printf("\n");
}
