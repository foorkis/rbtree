#ifndef rbtree
#define rbtree
#include <iostream>

using std::cin;
using std::cout;

enum Color {RED, BLACK};

template <class T>
struct Node
{
    T data;
    Color color;
    Node* left;
    Node* right;
    Node* parent;
    Node ()              // for NIL node
    	: color(BLACK)
    	, left(this)
    	, right(this)
    	, parent(this){};
    Node (T value, Color c)
    	: data(value)
    	, color(c)
    	, left(nullptr)
    	, right(nullptr)
    	, parent(nullptr){};
    Node (T value, Color c, Node* p)
    	: data(value)
    	, color(c)
    	, left(nullptr)
    	, right(nullptr)
    	, parent(p){};
    void printNode()
	{
	    if (RED==color)
		cout << "(RED|" << data << ")";
	    else
		cout << "(BLACK|" << data << ")";
	}
};

template <class T>
class RBtree
{
private:
    Node<T>* _root;
    Node<T>* nil;
public:
    RBtree()
	{
	    nil=new Node<T>();
	    nil->left=nil;
	    nil->right=nil;
	    nil->parent=nil;
	    _root=nil;
	};
    RBtree(T value)
	{
	    
	};
    ~RBtree()
	{
	    if (_root->right!=nullptr)
		delete _root->right;
	    if (_root->left!=nullptr)
		delete _root->left;
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
    T getData()
	{
	    return _root->data;
	};
    T setData();
};

#endif //#ifndef rbtree
