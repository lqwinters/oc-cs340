#include <stdio.h>
#include <string.h>

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

main(){

  TreeNodePtr buildTree

  void preOrder(TreeNodePtr node) {
    void visit(TreeNodePtr);
    if (node != NULL){
      visit(node);
      preOrder(node -> left);
      preOrder(node -> right);
    }
  } //end preOrder


  void visit(TreeNodePtr node) {
    printf("%d", node -> data.num);
  } //end visit



