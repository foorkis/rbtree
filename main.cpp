#include "rbtree.hpp"
#include <iostream>
using std::cout;

int main()
{
    RBtree<int>* t1 = new RBtree<int>(1);
    RBtree<int>* t2 = new RBtree<int>(5);
    cout << t1->getData() << " " << t2->getData() << '\n';
    t1->setData(10);
    t2->setData(50);
    cout << t1->getData() << " " << t2->getData();
    delete t1;
    delete t2;
    return 0;
}
