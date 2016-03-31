#ifndef rbtree
#define rbtree
#include <iostream>

using std::cin;
using std::cout;

enum Color {RED, BLACK};

template <class T>
struct Node
{
    int data;
    Color color;
    Node* left;
    Node* right;
    Node* parent;
    Node (T value)
	: data(value)
	, color(BLACK)
	, left(nullptr)
	, right(nullptr)
	, parent(nullptr){};    
};

template <class T>
class RBtree
{
private:
    Node<T>* _root;
public:
    RBtree()
	{
	    _root=nullptr;
	};
    RBtree(T value)
	{
	    _root = new Node<T>(value);
	};
    ~RBtree()
	{
	    if (_root->right!=nullptr)
		delete _root->right;
	    if (_root->left!=nullptr)
		delete _root->left;
	    cout << "\nwoosh!\n";
	};
    void printRoot()
	{
	    cout << _root->data;
	};
    void insert(T value)
	{
	    
	};
    void search(T value);
    void print();
    Color getColor();
    void setColor(Color c);
    void flipColor();
    T getData();
    T setData();
};

#endif //#ifndef rbtree
