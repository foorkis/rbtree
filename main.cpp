#include "rbtree.hpp"
#include <iostream>
using std::cout;

int main()
{
    Node<int> n1(5,RED);
    Node<int> n2(10,BLACK);
    n1.printNode();
    n2.printNode();
//    RBtree<float> r = 123.4;
    return 0;
}
