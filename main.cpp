#include <iostream>
using std::cout;

enum Color {RED, BLACK};

int main()
{
    Color c1 = RED;
    Color c2 = BLACK;
    cout << c1 << " " << c2 << '\n';
    cout << (c1==RED) << " " << (c2==RED)<< '\n';
}
	
