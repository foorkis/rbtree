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
    cout << "deleted node " << this;
}

bool RBtree::isRoot()
{
    return (nullptr==parent);
}

bool RBtree::isLeftChild()
{
    if (this->isRoot()){
        cout << "\nerror: node "<< this
             <<" is root (from isLeftChild)";
        return false;
    }
    return (this==parent->left);
}

bool RBtree::isRightChild()
{
    if (this->isRoot()){
        cout << "\nerror: node "<< this
             <<" is root (from isRightChild)";
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

//         y                 x      
//        / \     right     / \    
//       x  [C]   ---->   [A]  y  
//      / \       <----       / \
//    [A] [B]      left     [B] [C]


void RBtree::rotateRight()  
{
    if (nullptr==this->left) // cant rotate right
        return;
    RBtree &x = this->left;
    RBtree &y = this;
    RBtree* temp = nullptr;
    if (y->isRoot){
        x->parent = nullptr;
        y->parent = x;
        tmp = x->right; // B adress goes to tmp
        x->right->parent = y;
        y->left = tmp; // B now connected to y
        
        
    }
    else{
    }
}
//----------------------------------------
    if (this->isRoot()){
        this->left->parent = nullptr; // 
        this-> parent = this->left;   // 
        this->left->right = this;     // connect y
        this->left = tmp;
        tmp->parent = this;           // connect [B] to y
        
    }
    else{
        
    }
    
}

void RBtree::rotateLeft()
{
}

void RBtree::insert(int key)
{
    RBtree* t = new Rbtree(key);
    if 
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
    a->flipColor();
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
    cout << "\nb is left child: " << b->isLeftChild(); 
    cout << "\nc is right child: " << c->isRightChild();
    cout << "\nc is left child: " << c->isLeftChild();
    cout << "\na is left child: " << a->isLeftChild();
    cout << "\na is right child: " << a->isRightChild() <<'\n';
}

#endif //#ifdef RBTREE_CPP
