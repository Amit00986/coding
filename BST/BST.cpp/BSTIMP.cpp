#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
       int data;
       Node* left;
       Node* right;

       Node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
     }

};
void levelorderTraversal(Node* root) 
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* curr = q.front();
        q.pop();

        if(curr == NULL ) {
            cout << endl;

            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else{
            cout << curr -> data  << " ";
            if(curr -> left) {
                q.push(curr -> left);
            }

            if(curr -> right) {
                q.push(curr -> right);

            }
            
          }
    }
    

}

 Node* insertIntoBST (Node* root, int d) {
    if(root == NULL )
    {
        root = new Node(d);
        return root;
    }

    if(d > root -> data ) {
        /// Right part m jana 
        root -> right = insertIntoBST(root->right, d);

    }
    else 
    {
        // left part m jao
        root -> left = insertIntoBST(root -> left, d);
    }
    return root;
 }

 void takeInput(Node* &root) {
    int data;
    cin >> data;

    while(data != -1) {
        root = insertIntoBST(root, data );
        cin >> data;
    }
 }

int main()
{
    Node* root = NULL;

    cout << "Enter data to create BST" << endl;
    takeInput(root);

    cout << "Printing the BST" << endl; 
    levelorderTraversal(root);

    return 0;
     
}