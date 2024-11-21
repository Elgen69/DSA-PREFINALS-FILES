#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the Binary Tree
typedef struct TreeNode {
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
} *TreeNode;

// Function to create a new node in the binary tree
TreeNode createNode(int value) {
    TreeNode newNode = (TreeNode)malloc(sizeof(struct TreeNode));
    newNode->value = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}



// Function to perform preorder traversal of the tree
void preorderTraversal(TreeNode root) {
 
}
// Function to flatten the binary tree into a linked list (preorder)
void flatten(TreeNode root) {
   
}
// Main function
int main() {
    // Create a sample binary tree
    TreeNode root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(5);
    root->left->left = createNode(3);
    root->left->right = createNode(4);
    root->right->right = createNode(6);

    // Flatten the binary tree into a linked list
    flatten(root);

    // Output the flattened tree (preorder traversal of the linked list)
    printf("Flattened tree (preorder): ");
    preorderTraversal(root);
    printf("\n");

    return 0;
}
