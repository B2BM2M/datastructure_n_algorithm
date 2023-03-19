/*
DFS - Depth First Search
1. preorder (data, left, right)
2. inorder (left, data, right)
3. postorder(left, right, data)
*/
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void printTree(Node* root)
{
    if(root == nullptr) return;
    // preorder algorithm, data, left, right
    cout << root->data << " ";
    printTree(root->left);
    printTree(root->right);
    
}

int main()
{
    // Level 1
    Node* root = createNode(1);
    // Level 2
    root->left = createNode(2);
    root->right = createNode(3);
    // Level 3
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    // Level 4
    root->left->right->left = createNode(9);
    root->right->right->left = createNode(15);

    printTree(root);
    cout << endl;


}

//                          1 ---------  L1
//                        /   \
//                       2      3 ------ L2
//                     /  \    /  \
//                    4    5  6    7 --- L3
//                        /       /
//                       9        15 --- L4

