#include <stdio.h>
#define STACKMAX 50

int stack[STACKMAX];
int posH,posE;

void popFromHead();
void pushFromHead( int );
void popFromEnd();
void pushFromEnd( int );
void stackInit();
void stackPrint();

int main()
{
	int i;
	stackInit();
	for (i = 0 ; i < 20; i++)
	{
		pushFromHead(i);
		pushFromEnd(i*i);
	}
	stackPrint();
	return 1;
}
void stackInit()
{
	posH = 0;
	posE = STACKMAX;
}
void popFromHead()
{
	if( posH < 1 )
	{
		printf("Stack from head is empty!\n");
		return;
	}
	--posH;
}
void pushFromHead( int value)
{
	if( ++posH >= posE)
	{
		printf("Stack is full!\n");
		--posH;
	}
	else
		stack[posH] = value;
}
void popFromEnd()
{
	if( posE > STACKMAX-1 )
	{
		printf("Stack from end is empty!\n");
		return;
	}
	++posH;
}
void pushFromEnd( int value)
{
	if( --posE <= posH)
	{
		printf("Stack is full!\n");
		++posE;
	}
	else
		stack[posE] = value;
}

void stackPrint()
{
	int i;
	if( posH < 1 )
		printf("Stack from head is empty!\n");
	else
	{
		printf("stack from head :\n");
		for (i = 1; i <= posH; ++i )
		{
			printf("%d\t", stack[i]);
		}
		printf("\n");
	}
	if( posE > STACKMAX-1 )
		printf("Stack from end is empty!\n");
	else
	{
		printf("stack from end :\n");
		for (i = STACKMAX-1; i >= posE; --i )
		{
			printf("%d\t", stack[i]);
		}
		printf("\n");
	}
}
