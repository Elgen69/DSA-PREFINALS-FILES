#include <stdio.h>
#include <stdlib.h>

// Define the AVLNode structure using typedef
typedef struct AVLNode {
    int data;
    struct AVLNode* left;
    struct AVLNode* right;
    int height;
} *AVLNode;

// Helper function to create a new AVL node
AVLNode create_node(int data) {
    AVLNode new_node = (AVLNode)malloc(sizeof(struct AVLNode)); // Allocate memory for the new node
    new_node->data = data;
    new_node->left = new_node->right = NULL;
    new_node->height = 1; // Height of a newly created node is 1
    return new_node;
}

// Insert a node and balance the tree
AVLNode insert(AVLNode node, int data) {
   
}
// Get the height of a node
int height(AVLNode node) {
    return node ? node->height : 0;
}

// Get the balance factor of a node
int balance_factor(AVLNode node) {
    return node ? height(node->left) - height(node->right) : 0;
}

// Find the node with the minimum value (used in deletion)
AVLNode min_value_node(AVLNode node) {
    AVLNode current = node;
    while (current->left != NULL)
        current = current->left;
    return current;
}


// In-order traversal to print the tree
void inorder_traversal(AVLNode root) {
    if (root == NULL) return;
    inorder_traversal(root->left);
    printf("%d ", root->data);
    inorder_traversal(root->right);
}

// Print the height of the tree
void print_height(AVLNode root) {
    printf("Height of the tree: %d\n", height(root));
}
// Right rotation
AVLNode right_rotate(AVLNode y) {
   
    return x; // New root
}

// Left rotation
AVLNode left_rotate(AVLNode x) {
    
    return y; // New root
}
// Delete a node and balance the tree
AVLNode delete(AVLNode root, int data) {
  
}
// Insert a node and balance the tree
AVLNode insert(AVLNode node, int data) {
   
}
// Function to perform the required AVL tree operations

void avl_tree_operations() {
    AVLNode root = NULL;

    // Insert integers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        root = insert(root, i);
    }

    // Delete even numbers (2 and 4)
    root = delete(root, 2);
    print_height(root);
    printf("In-order traversal after deleting 2: ");
    inorder_traversal(root);
    printf("\n");

    root = delete(root, 4);
    print_height(root);
    printf("In-order traversal after deleting 4: ");
    inorder_traversal(root);
    printf("\n");
}

int main() {
    avl_tree_operations();
    return 0;
}