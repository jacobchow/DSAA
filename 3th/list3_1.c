#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
	Node * header = NULL ;
	header = listCreat( header );
	listPrint(header);
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
