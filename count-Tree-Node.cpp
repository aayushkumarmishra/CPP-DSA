//
//  count-Tree-Node.cpp
//  Tree
//
//  Created by AYUSH MISHRA on 28/06/1943 Saka.
//

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

template <typename T>


class TreeNode
{
public:
    
   
    T data;
    vector <TreeNode<int>*> children;
    
    TreeNode(T data)
    {
        this -> data = data;
    }
};

TreeNode<int>* takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data " << endl;
    cin >> rootData;
    
    TreeNode<int>* root = new TreeNode<int> (rootData);
    
    queue <TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    
    while(pendingNodes.size() != 0)
    {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        
        cout << "Enter Number of children " << front -> data << endl;
        int numChild;
        cin >> numChild;
        
        for(int i=0;i<numChild;i++)
        {
            int childData;
            cout << "Enter " << i << "ith child of " << front -> data << endl;
            cin >> childData;
            
            TreeNode<int>* child = new TreeNode<int>(childData);
            front -> children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

int numNode(TreeNode<int>* root)
{
    int ans = 1;
    for(int i=0;i<root->children.size();i++)
    {
        ans += numNode(root->children[i]);
    }
    return ans;
}

void printTree(TreeNode<int>* root)
{
    if(root == NULL)
    {
        return;;
    }
    cout << root -> data << ":";
    
    for(int i=0;i<root->children.size();i++)
    {
        cout << root->children[i]->data<< endl;
    }
    for(int i=0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}

int main()
{
    TreeNode<int>* root = takeInputLevelWise();
    printTree(root);
    
}

