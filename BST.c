#include <stdio.h>
#include <string.h>

struct bst {
	int data;
	struct bst *left, *right;
};


typedef struct {
  int num;
} NodeDate;

typedef struct treenode {
  NodeDate data;
  struct treenode *left, *right;
} TreeNode, *TreeNodePtr;

typedef struct {
  TreeNodePtr root;
} BinaryTree;

void quit() {
	printf("You have quit the program.\n");
	printf("Goodbye!\n");
}

void preOrder() {
	printf("This is your BST printed in pre-order.\n");
}

int main() {
	int value = -1;

	while(value) {
		printf("1. Adds a new node.\n");
		printf("2. Prints your BST in pre-order.\n");
		printf("3. Prints your BST in order.\n");
		printf("4. Prints your BST in post-order.\n");
		printf("\n Please select (1-4)\n Note: 0 quits the program\n");

		//printf("Pleae enter a number: ");
		scanf("%d", &value);
		//printf ("You have entered %d\n", value);

		if(value == 0) {
			quit();
		}

		else if(value == 1) {
			printf("Pleae add a node to your tree.\n" );
		}

		else if(value == 2) {
			preOrder();
		}

		else if(value == 3) {
			printf("This is your BST printed in order.\n");
		}

		else if(value == 4) {
			printf("This is your BST printed in post-order.\n");
		}

		else {
			printf("This is not a menu choice.\n");
		}

	}

	return 0;
}