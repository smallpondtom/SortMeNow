#include <bits/stdc++.h>

struct Node 
{
  int key;
  struct Node *left, *right;
};

struct Node *newNode(int item);
void storeSorted(Node *root, int arr[], int &i);
Node* insert(Node *node, int key);
void treeSort(int arr[], int n);
