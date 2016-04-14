#ifndef RBTREE_CPP
#define RBTREE_CPP

#include "rbtree.hpp"
#include <iostream>
using std::cin;
using std::cout;

// RBtree::RBtree()
//     : key(0)
//     , color(BLACK)
//     , left(nullptr)
//     , right(nullptr)
//     , parent(nullptr)
// {
// };

RBtree::RBtree(int key)
    : key(key)
    , color(RED)
    , left(nullptr)
    , right(nullptr)
    , parent(nullptr){};

RBtree::~RBtree()
{
    if (right != nullptr) delete right;
    if (left != nullptr)  delete left;
    cout << "pshchoooo\n";
}

bool RBtree::isRoot()
{
    return (nullptr==parent);
}

bool RBtree::isLeftChild()
{
    if (this->isRoot()){
        cout << "\nerror: node is root (from isLeftChild)";
        return false;
    }
    return (this==parent->left);
}

bool RBtree::isRightChild()
{
    if (this->isRoot()){
        cout << "\nerror: node is root (from isRightChild)";
        return false;
    }
    return (this==parent->right);
}

RBtree* RBtree::grandpa()
{
    if (nullptr == parent)
        return nullptr;
    if (nullptr == parent->parent)
        return nullptr;
    return parent->parent;
}

RBtree* RBtree::uncle()
{
    if (this->grandpa() == nullptr)
        return nullptr;
    if (this->isLeftChild())
        return parent->right;
    if (this->isRightChild())
        return parent->left;
}

void RBtree::flipColor()
{
    (RED==color)
	? color=BLACK
	: color=RED;
}

void RBtree::insert(int key)
{
}

void RBtree::search(int key)
{
}

void RBtree::printNode()
{
    cout << '[' << key << " (";
    if (RED==color)
	cout << "red";
    if (BLACK==color)
	cout << "black";
    cout << ")]";
}

void RBtree::test()
{
    RBtree* a = new RBtree(1);
    RBtree* b = new RBtree(2);
    RBtree* c = new RBtree(3);
    a->left = c;
    c->parent = a;
    a->right = b;
    b->parent = a;
    a->printNode();
    b->printNode();
    c->printNode();
    cout << "\nb's parent: " << b->parent;
    cout << "\nc's parent: " << c->parent;
    cout << "\nb is right child: " << b->isRightChild();
    cout << "\nb is left child: " << b->isLeftChild(); // segfault?
    cout << "\nc is right child: " << c->isRightChild();
    cout << "\nc is left child: " << c->isLeftChild();
    cout << "\na is left child: " << a->isLeftChild();
    cout << "\na is right child: " << a->isRightChild();
}

#endif //#ifdef RBTREE_CPP
