#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// Funcții de bază (început implementare)
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void preOrder(Node* root) {
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root) {
    if (root == NULL)
        return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}
void postOrder(Node* root) {
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}
void levelOrder(Node* root) {
    if (root == NULL)
        return;
    Node* coada[100];
    int start = 0, end = 0;
    coada[end++] = root;
    while (start < end) {
        Node* current = coada[start++];
        printf("%d ", current->data);
        if (current->left)
            coada[end++] = current->left;
        if (current->right)
            coada[end++] = current->right;
    }
}
int main() {
    printf("Arborele este în construcție.\n");
    Node* radacina = createNode(1);
    radacina->left = createNode(2);
    radacina->right = createNode(3);
    radacina->left->left= createNode(4);
    radacina->left->right = createNode(5);
    radacina->right->left = createNode(6);
    radacina->right->right = createNode(7);
   preOrder(radacina);
     printf("\n");
   inOrder(radacina);
     printf("\n");
   postOrder(radacina);
     printf("\n");
   levelOrder(radacina);
     printf("\n");
}
