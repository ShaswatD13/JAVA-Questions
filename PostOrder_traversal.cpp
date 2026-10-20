#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

static int idx = -1;
Node* BuildTree(vector<int> preorder){
    idx++;
    if(preorder[idx] == -1)
    {
        return nullptr;
    }
    Node* root =new Node(preorder[idx]); 
    root -> left = BuildTree(preorder);
    root -> right = BuildTree(preorder);

    return root;
}

void PostOrder(Node* root)
{
    if(root == nullptr)
    {
        return;
    }

    PostOrder(root -> left);
    PostOrder(root -> right);
    cout << root -> data << " ";
}

int main() {

    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = BuildTree(preorder);

    PostOrder(root);
    return 0;

}