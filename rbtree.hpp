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
    bool isRoot();
    bool isLeftChild();
    bool isRightChild();
    RBtree* grandpa();
    RBtree* uncle();
    void flipColor();
    void rotateRight();
    void rotateLeft();
    void insert(int key);
    void search(int key);
    void printNode();
    void test();
};

#endif //#ifndef RBTREE_HPP

