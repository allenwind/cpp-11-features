#include <iostream>

using namespace std;

enum class Sequence
{
    List,
    Queue,
    Deque
};

enum class Tree
{
    Trie,
    BST,
    BTree
};

int main(int argc, char ** argv)
{
    // Sequence::Queue == Tree::Trie; error
    return 0;
}