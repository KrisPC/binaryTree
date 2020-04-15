#include "iostream"
#include "BinaryTree.hpp"

using namespace std;

int main()
{
     BinaryTree* theTree = new BinaryTree(5);
     theTree->add(3);
     theTree->add(5);
     theTree->add(13);
     theTree->add(90);
     theTree->add(1);
     theTree->add(27);
     theTree->add(54);
     theTree->add(2);
     theTree->add(111);

    //theTree->displayPreOrder();
    theTree->displayPostOrder();
}