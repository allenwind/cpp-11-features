#include <iostream>

using namespace std;

struct Node
{
    int data[20];
};

class List
{
public:
    int data[20];
};

// sizeof用的类的*数据成员*
int main(int argc, char ** argv)
{
    cout << sizeof(Node::data) << endl;
    cout << sizeof(List::data) << endl;

    Node node;
    List list;

    cout << "Node::data->" << sizeof(node.data) << endl;
    cout << "List::data->" << sizeof(list.data) << endl;
}