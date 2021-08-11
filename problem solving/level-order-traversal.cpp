#include <bits/stdc++.h>	
using namespace std;
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution 
{
    public:
  		Node* insert(Node* root, int data) 
        {
            if(root == NULL) 
                return new Node(data);
            else 
            {
                Node* cur;
                if(data <= root->data) 
                {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else 
                {
                    cur = insert(root->right, data);
                    root->right = cur;
               }
               return root;
           }
        }
    void levelOrder(Node *root) 
    {
        if(root == NULL) 
            return;
        queue<Node*> Q;
        Q.push(root);  
        //while there is at least one discovered node
        while(!Q.empty()) 
        {
            Node* current = Q.front();
            Q.pop(); // removing the element at front
            cout<<current->data<<" ";
            if(current->left != NULL) 
                Q.push(current->left);
            if(current->right != NULL) 
                Q.push(current->right);
	    }
    }
}; 
int main() 
{
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;
    cin >> t;
    while(t-- > 0) 
    {
        cin >> data;
        root = myTree.insert(root, data);
    }
	myTree.levelOrder(root);
    return 0;
}