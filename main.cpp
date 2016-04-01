#include "rbtree.hpp"
#include <iostream>
using std::cout;

int main()
{
    RBtree<int>* t1 = new RBtree<int>;
    RBtree<int>* t2 = new RBtree<int>(5);
    delete t1;
    delete t2;
    return 0;
}
