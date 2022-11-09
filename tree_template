#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>

using namespace std;
template <typename T>
class BinaryTree
{
public:
struct TreeNode
{
T value;
TreeNode *left;
TreeNode *right;
};
TreeNode *root;
void insert(TreeNode *&, TreeNode *&);
void destroySubTree(TreeNode *);
void deleteNode(T, TreeNode *&);
void makeDeletion(TreeNode *&);
void displayInOrder(TreeNode *);
void displayPreOrder(TreeNode *);
void displayPostOrder(TreeNode *);
int countNodes(TreeNode *&);
public:
BinaryTree() 
{ root = NULL; }
~BinaryTree() 
{ destroySubTree(root); }
void insertNode(T);
bool searchNode(T);
void remove(T);
void displayInOrder()
{ displayInOrder(root); }
int numNodes();
};


template <typename TreeNode>
void BinaryTree<TreeNode> :: insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
if (nodePtr == NULL)
{
nodePtr = newNode;
}
else if (newNode->value < nodePtr->value)
{
insert(nodePtr->left, newNode);
}
else
{
insert(nodePtr->right, newNode);
}
}
template <typename T>
void BinaryTree<T>::insertNode(T num)
{
TreeNode *newNode = NULL;
newNode = new TreeNode;
newNode->value = num;
newNode->left = newNode->right = NULL;
insert(root, newNode);
}
template <typename TreeNode>
void BinaryTree<TreeNode>::destroySubTree(TreeNode *nodePtr)
{
if (nodePtr->left)
{
destroySubTree(nodePtr->left);
}
if (nodePtr->right)
{
destroySubTree(nodePtr->right);
}
delete nodePtr;
}
template <typename T>
bool BinaryTree<T>::searchNode(T num)
{
bool status = false;
TreeNode *nodePtr = root;
while (nodePtr)
{
if (nodePtr->value == num)
{
status = true;
}
else if (num < nodePtr->value)
{
nodePtr = nodePtr->left;
}
else
{
nodePtr = nodePtr->right;

}
}
return status;
}

template <typename T>
void BinaryTree<T>::remove(T num)
{
deleteNode(num, root);
}
/*template <typename TreeNode>
void BinaryTree<TreeNode>::deleteNode(int num, TreeNode *&nodePtr)
{
if (num < nodePtr->value)
{
deleteNode(num, nodePtr->left);
}
else if (num > nodePtr->value)
{
deleteNode(num, nodePtr->right);
}
else
{
makeDeletion(nodePtr);
}
}*/

template <typename TreeNode>
void BinaryTree<TreeNode>::makeDeletion(TreeNode *&nodePtr)
{
TreeNode *tempNodePtr = NULL;
if (nodePtr == NULL)
{
cout << "Cannot delete empty node.\n";
}
else if (nodePtr->right == NULL)
{
tempNodePtr = nodePtr;
nodePtr = nodePtr->left;
delete tempNodePtr;
}
else if (nodePtr->left == NULL)
{
tempNodePtr = nodePtr;
nodePtr = nodePtr->right;
delete tempNodePtr;
}
else
{
tempNodePtr = nodePtr->right;
while (tempNodePtr->left)
{
tempNodePtr = tempNodePtr->left;
}
tempNodePtr->left = nodePtr->left;
tempNodePtr = nodePtr;
nodePtr = nodePtr->right;
delete tempNodePtr;
}

cout<<"\n\nNow deleting "<<nodePtr->value<<" from the tree...."<<endl;
}
template <typename TreeNode>
void BinaryTree<TreeNode>::displayInOrder(TreeNode *nodePtr)
{
if (nodePtr)
{
displayInOrder(nodePtr->left);
cout << nodePtr->value <<" ";
displayInOrder(nodePtr->right);
}
}

template <typename TreeNode>
int BinaryTree<TreeNode>::countNodes(TreeNode *&nodePtr)
{
int count;
if (nodePtr == NULL)
{
count = 0;
}
else
{
count = 1 + countNodes(nodePtr->left) + countNodes(nodePtr->right);
}
return count;
}
#endif
