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
};

template <class T>
class RBtree
{
private:
    Node<T>* _root;
    const Node<T>* const nil;  // const pointer for const object
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
