#include <iostream>
#include <initializer_list>
#include <vector>

using namespace std;

double average(const initializer_list<double> & il)
{
    if (il.size() == 0)
        return 0.0;
    double total = 0;
    for (auto x : il)
        total += x;
    return total / il.size();
}

struct Node
{
    Node * next;
    int data;
};

Node * create_node(int data)
{
    Node * node = new Node;
    node->next = nullptr;
    node->data = data;
    return node;
}

class List
{
private:
    Node * head;
    Node * tail;
    int size;

public:
    List();
    ~List();
    List(const initializer_list<Node*> & il);
    void show();
};

List::List() : size(0)
{
    head = nullptr;
    tail = nullptr;
}

List::List(const initializer_list<Node*> & il)
{
    size = il.size();
    head = nullptr;
    tail = nullptr;
    for (auto node : il)
    {
        if (head == nullptr)
            head = node;
        else
            tail->next = node;
        tail = node;
    }
}

List::~List()
{
    Node * node;
    while (head != nullptr)
    {
        node = head;
        head = head->next;
        delete node;
    }
}

void List::show()
{
    Node * node = head;
    while (node != nullptr)
    {
        cout << node->data << "->";
        node = node->next;
    }
    cout << endl;
}

// stump
class Stump
{
private:
    int rs;
    double wt;
public:
    Stump(int r, double w) : rs(r), wt(w) {}
    int roots() const { return rs; }
    double weight() const { return wt; }
};

// 初始化列表接受任意长度
// 统一{}初始化
// 预防缩窄

int main(int argc, char ** argv)
{   
    // int initializer_list
    int a = {1};
    cout << a << endl;

    Stump s = { 100, 188.1 }; // class init
    cout << s.roots() << " " << s.weight() << endl;

    // int sr = {1.8e99}; // narrowing conversion, is error

    // array initializer_list
    int b[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
        cout << b[i] << " ";
    cout << endl;

    // vector initializer_list
    vector<int> vs({1, 2, 3, 4, 5});
    for (auto x : vs)
        cout << x << " ";
    cout << endl;

    // function initializer_list
    auto x = average({1.1, 2.2, 3.3, 4.4, 5.5});
    cout << boolalpha;
    cout << (x == 3.3) << endl;

    // class constructor initializer_list
    List list({create_node(1), create_node(2), create_node(3)});
    list.show();
}