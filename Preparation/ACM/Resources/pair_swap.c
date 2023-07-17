#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

typedef struct node node;

void insert_end ( node** root, int val )
{
	if ( (*root) == NULL ) {
		*root = (node*) malloc ( sizeof ( node ) );
		(*root)->data = val;
		(*root)->next = NULL;
	} else {
		insert_end ( &(*root)->next, val );
	}
}

void reverse_pair ( node** root )
{
	if ( (*root) == NULL ) return;
	if ( (*root)->next == NULL ) return;
	int left = (*root)->data;
	int right = (*root)->next->data;
	if ( left % 2 == 0 && right % 2 == 0 ) {
		(*root)->next->data = left;
		(*root)->data = right;
		reverse_pair ( &(*root)->next->next );
	} else {
		reverse_pair ( &(*root)->next );
	}
}

void print_list ( node** root )
{
	if ( (*root) == NULL ) {
		return;
	} else {
		printf("%d ", (*root)->data );
	}
	print_list ( &(*root)->next );
}

int main ()
{
	struct node* root = NULL;
	int n; scanf("%d", &n);
	for ( int i = 0 ; i < n ; ++i ) {
		int t; scanf("%d",&t);
		insert_end(&root, t);
	}
	
	reverse_pair ( &root );
	
	print_list ( &root );

	return 0;
}
