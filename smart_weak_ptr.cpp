#include <iostream>
#include <memory>

using namespace std;

class Node;
class List;

class Node
{
public:
    shared_ptr<List> lptr;
    ~Node() { cout << "delete node" << endl; }
};

class List
{
public:
    shared_ptr<Node> nptr;
    ~List() { cout << "delete list" << endl; }
};

int main(int argc, char ** argv)
{
    auto nptr = make_shared<Node>();
    auto lptr = make_shared<List>();

    lptr->nptr;
    nptr->lptr;

    return 0;
}