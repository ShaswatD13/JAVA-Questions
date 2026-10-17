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

int heightTree(Node* root)
{
  if(root == nullptr)
  {
    return 0;
  }

  int l = heightTree(root -> left);
  int r = heightTree(root -> right);

  int h = max(l,r);
  return h + 1;
}