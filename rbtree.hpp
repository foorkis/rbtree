#ifndef rbtree
#define rbtree
// implementation in .hpp,
// cause there's template classes
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
    RBtree();
    RBtree(T value);
    ~RBtree();
    void insert(T value);
    void search(T value);
    void print();
    Color getColor();
    void setColor(Color c);
    void flipColor();
    T getData();
    T setData();
};

RBtree()
{
    _root=nullptr;
}

RBtree(T value)
{
    _root = new Node(value);
}

~RBtree()
{
    if (right!=nullptr)
	delete right;
    if (left!=nullptr)
	delete left;
}

void RBtree::insert(T value)
{
}

#endif //#ifndef rbtree
