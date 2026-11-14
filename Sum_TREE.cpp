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

int sumTree(Node* root)
{
  if(root == nullptr)
  {
    return;
  }
  int lsum = sumTree(root -> left);
  int rsum = sumTree(root -> right);

  return lsum + rsum + root -> data;
}