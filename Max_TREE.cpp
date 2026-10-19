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

int maxTree(Node* root)
{
  if(root == nullptr)
  {
    return INT_MIN;
  }

  int l = maxTree(root -> left);
  int r = maxTree(root -> right);

  int maximum = max(l,max(r,root -> data));

  return maximum;
}