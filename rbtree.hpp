#ifndef RBTREE_HPP
#define RBTREE_HPP

enum Color {RED, BLACK};

class RBtree
{
private:
    int key;
    Color color;
    RBtree* left;
    RBtree* right;
    RBtree* parent;
public:
//    RBtree();
    RBtree(int key);
    ~RBtree();
    void flipColor();
    void insert(int key);
    void search(int key);
    void print();
};

#endif //#ifndef RBTREE_HPP

