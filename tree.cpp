#include<bits/stdc++.h>
#include <iostream>

using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
};

Node* buildTree(char* postorder, char* inorder, int postStart, int postEnd, int inStart, int inEnd) {
    if (postStart > postEnd || inStart > inEnd)
        return NULL;

    Node* root = new Node;
    root->data = postorder[postEnd];

    int inIndex = 0;
    for (int i = inStart; i <= inEnd; i++) {
        if (inorder[i] == root->data) {
            inIndex = i;
            break;
        }
    }

    root->left = buildTree(postorder, inorder, postStart, postStart + inIndex - inStart - 1, inStart, inIndex - 1);
    root->right = buildTree(postorder, inorder, postStart + inIndex - inStart, postEnd - 1, inIndex + 1, inEnd);

    return root;
}

void printInorder(Node* root) {
    if (root == NULL)
        return;

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main() {
    char postorder[] = {'K', 'D', 'I', 'E', 'A', 'G', 'B', 'F', 'C', 'J', 'H'};
    char inorder[] = {'D', 'K', 'I', 'B', 'A', 'E', 'G', 'H', 'J', 'F', 'C'};

    Node* root = buildTree(postorder, inorder, 0, 10, 0, 10);

    cout << "Inorder traversal of the constructed tree: ";
    printInorder(root);
    cout << endl;

    return 0;
}