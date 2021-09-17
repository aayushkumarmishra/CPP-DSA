//
//  usingTree.cpp
//  Tree
//
//  Created by AYUSH MISHRA on 26/06/1943 Saka.
//

#include<iostream>
#include<vector>

using namespace std;

template <typename T>

class TreeNode
{
    
public:
    
    T data;
    vector <TreeNode<T>*> children;
    
    TreeNode(T data)
    {
        this -> data = data;
    }
};

int main()
{
    TreeNode<int>* root = new TreeNode<int> (1);
    TreeNode<int>* node1 = new TreeNode<int> (2);
    TreeNode<int>* node2 = new TreeNode<int> (3);
    
    
    root -> children.push_back(node1);
    root -> children.push_back(node2);
}


