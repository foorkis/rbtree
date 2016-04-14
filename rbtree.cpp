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

// no check for root node
//------------------------------
bool RBtree::isLeftChild()
{
    return (this==parent->left);
}

bool RBtree::isRightChild()
{
    return (this==parent->right);
}
//------------------------------

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

void RBtree::print()
{
    //FIXME
    cout << key << " (";
    if (RED==color)
	cout << "red";
    if (BLACK==color)
	cout << "black";
    cout << ")\n";
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
    cout << "\nb is right child: " << b->isRightChild();
    cout << "\nb is left child: " << b->isLeftChild(); // segfault?
    cout << "\na is right child: " << a->isRightChild();
    cout << "\nb is left child: " << a->isLeftChild();
}

#endif //#ifdef RBTREE_CPP
