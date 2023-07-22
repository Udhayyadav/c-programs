#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* buildTree(int nodes[], int idx) {
    (idx)++;
    if (nodes[idx] == -1) {
        return NULL;
    }
    
    struct Node* nn = (struct Node*)malloc(sizeof(struct Node));
    nn->data = nodes[idx];
    nn->left = buildTree(nodes, idx);
    nn->right = buildTree(nodes, idx);
    
    return nn;
}

int main() {
    int nodes[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    int idx = -1;
    
    struct Node* root = buildTree(nodes, idx);
    printf("%d\n", root->data);
    
    return 0;
}
