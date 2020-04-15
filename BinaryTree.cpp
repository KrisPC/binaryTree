#include "BinaryTree.hpp"
#include "iostream"

BinaryTree::BinaryTree(int payload)
{
    this->payload = payload;
    this->leftChild = 0;
    this->rightChild = 0;
}

void BinaryTree::displayInOrder()
{
    //inorder(node)
    //if node == null then return
    //inorder(node.left)
    //visit(node)
    //inorder
    if(!this)
    {
        return;
    }
    this->leftChild->displayInOrder();
    std::cout << this->payload << "\n";
    this->rightChild->displayInOrder();
}
        
void BinaryTree::displayPreOrder()
{
    /* preorder(node)
    if(node == null)
        return;
        print node
        preorder(node.left)
        preorder(node.right)
    */

   if(!this)
   {
       return;
   }
   std::cout << this->payload << "\n";
   this->leftChild->displayPreOrder();
   this->rightChild->displayPreOrder();
   

}

void BinaryTree::displayPostOrder()
{
/* postorder(node)
    if (node == null)
        return
    postorder(node.left)
    postorder(node.right)
    visit(node)
*/
if(!this)
{
    return;
}
    this->leftChild->displayPostOrder();
    this->rightChild->displayPostOrder();
    std::cout << this->payload << "\n";

}

void BinaryTree::add(int payload)
{
    if(payload <= this->payload)
    {
        //should go to my left
        if(!this->leftChild)
        {
            this->leftChild = new BinaryTree(payload);
        }
        else
        {
            this->leftChild->add(payload);
        }
    }
    else
    {
        //should go to my right
        if(!this->rightChild)
        {
            this->rightChild = new BinaryTree(payload);
        }
        else
        {
            this->rightChild->add(payload);
        } 
    } 
}