#ifndef rbtree
#define rbtree
#include <iostream>

using std::cin;
using std::cout;

template <class T>
struct Node
{
    T data;
    char color;
    Node* left;
    Node* right;
    Node* parent;
    Node ()
    	: color('b')
    	, left(nullptr)
    	, right(nullptr)
    	, parent(nullptr){};
    Node (T value, char c)
    	: data(value)
    	, color(c)
    	, left(nullptr)
    	, right(nullptr)
    	, parent(nullptr){};
    Node (T value, char c, Node* p)
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
    Node<T>* nil;
public:
    RBtree()
	{
	    nil=new Node<T>();
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
    
    bool getColor();
    void setColor(Color c);
    void flipColor();
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
