#include <iostream>
#include <vector>

using namespace std;

template <class T>
struct Node
{
    Node<T> * next;
    T data;
};

template <class T>
Node<T> * CreateNode(T data)
{
    Node<T> * node = new Node<T>;
    node->next = nullptr;
    node->data = data;
    return node;
}

int main(int argc, char ** argv)
{
    using Nodes = vector<Node<string>*>; // C++11之前不允许两个右尖括号出现
    Nodes nodes = { CreateNode<string>("a"), CreateNode<string>("b"), CreateNode<string>("c") };
    for (auto n : nodes)
        cout << n->data << endl;

}