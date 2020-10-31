#include <stdio.h>
#include "tree.h"

int main() {
	Node *root = NULL;
	
	/* BST Example */
	root = insertBST(root, 50);
	insertBST(root, 30);
	insertBST(root, 20);
	insertBST(root, 40);
	insertBST(root, 70);
	insertBST(root, 60);
	insertBST(root, 80);
    
    /* AVL Tree Example */
//	root = insertAVL(root, 10);
//	root = insertAVL(root, 20);
//	root = insertAVL(root, 30);
//	root = insertAVL(root, 40);
//	root = insertAVL(root, 50);
//	root = insertAVL(root, 25);
	
//	printf("Inorder traversal \n");
//	inorderTraversal(root);

	treeView(root);
	
	return 1;
}
