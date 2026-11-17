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

void preOrder(Node* root,vector<string> &p)
{
    if(root == nullptr)
    {
        p.push_back("null");
        return;
    }
    p.push_back(root -> data);
    preOrder(root -> left,p);
    preOrder(root -> right,p); 
}