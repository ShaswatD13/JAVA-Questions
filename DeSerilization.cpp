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

int i = 0;
Node* deSerilization(vector<string> p)
{
    if(p[i] == "null")
    {
        i++;
        return nullptr;
    }
    Node* root = new Node(p[i]);
    i++;
    root -> left = deSerilization(p);
    root -> right = deSerilization(p);
    return root;
}