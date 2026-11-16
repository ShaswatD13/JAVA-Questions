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

int sizeTree(Node* root)
{
  if(root == nullptr)
  {
    return;
  }
  int l = sizeTree(root -> left);
  int r = sizeTree(root -> right);

  return l+r+1;
}