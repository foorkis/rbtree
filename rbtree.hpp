#ifndef RBTREE
#define RBTREE
#include <iostream>

using std::cin;
using std::cout;

enum Color {RED, BLACK};

class RBtree
{
private:
    int data;
    Color color;
    RBtree* left;
    RBtree* right;
    RBtree* parent;
    static Rbtree* NILl;
public:
    RBtree()
	{
	    nil=new Node<T>();   
	    _root=nil;
	};
    RBtree(T value)
	{
	    nil=new Node<T>();
	    _root=new Node<T>(value, BLACK, nil);
	};
    ~RBtree()
	{
	    if (_root->right != nil)
		delete _root->right;
	    if (_root->left != nil)
		delete _root->left;
	    if ((_root->parent==nil) and (_root!=nil))
		delete nil;
	};
    T getData()
	{
	    return _root->data;
	};
    void setData(T value)
	{
	    _root->data=value;
	};
    Color getColor()
	{
	    return _root->color;
	};
    void setColor(Color c)
	{
	    _root->color=c;
	};
    void flipColor()
	{
	    (_root->color=RED)
		? _root->color=BLACK
		: _root->color=RED;
	};
    void insert(T value)
	{
	    
	};
    void search(T value)
	{

	};
    void print();
};

#endif //#ifndef RBTREE
