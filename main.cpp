#include <stdio.h>
#include <stdlib.h>

struct n {

	n* next;
	int data;
};
typedef n node;
node* root = NULL;
node* son = NULL;
void enqueue(int x)
{
	if (root == NULL)
	{
		root = (node*)malloc(sizeof(node));
		root->data = x;
		root->next = NULL;
		son = root;
	}
	else {
		son->next = (node*)malloc(sizeof(node));
		son->next->data = x;
		son = son->next;
		son->next = NULL;
	}

}

int dequeu()
{

	if (root == NULL)
	{
		printf("Linked list bos");
		return -1;
	}
	int rvalue = root->data;
	node* temp = root;
	root = root->next;
	free(temp);
	return rvalue;

}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	printf("%d ", dequeu());
	printf("%d ", dequeu());
	printf("%d ", dequeu());
}
