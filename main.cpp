#include "rbtree.hpp"
#include <iostream>
using std::cout;

int main()
{
    RBtree<float> r = 123.4; // почему-то приводит к инту
    r.printRoot();
    return 0;
}
