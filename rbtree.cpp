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
};

void RBtree::flipColor()
{
    (RED==color)
	? color=BLACK
	: color=RED;
};

void RBtree::insert(int key)
{
};

void RBtree::search(int key)
{
};

void RBtree::print()
{
    //FIXME
    cout << key << " (";
    if (RED==color)
	cout << "red";
    if (BLACK==color)
	cout << "black";
    cout << ")\n";
};

#endif //#ifdef RBTREE_CPP
