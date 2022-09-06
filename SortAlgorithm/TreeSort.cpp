#include "TreeSort.hpp"

struct Node *newNode(int item)
{
  struct Node *temp = new Node;
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

void storeSorted(Node *root, int arr[], int &i)
{
  if (root != NULL)
  {
    storeSorted(root->left, arr, i);
    arr[i++] = root->key;
    storeSorted(root->right, arr, i);
  }
}

Node* insert(Node* node, int key)
{
  if (node == NULL) return newNode(key);

  if (key < node->key)
    node->left = insert(node->left, key);
  else if (key > node->key)
    node->right = insert(node->right, key);
      
  return node;
}

void treeSort(int arr[], int n)
{
  struct Node *root = NULL;

  for (int i=0; i<n; i++)
    root = insert(root, arr[i]);
  
  int i = 0;
  storeSorted(root, arr, i);
}
