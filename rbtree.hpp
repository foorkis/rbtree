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
	, parent(nullptr){}
};

template <class T>
class RBtree
{
private:
    Node<T>* _root;
public:
    RBtree();
    ~RBtree();
    void insert(int value);
    void search(int value);
    void print();
};

RBtree()
{
    
}
