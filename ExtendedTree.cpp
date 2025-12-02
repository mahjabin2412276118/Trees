#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

Node insertBST(Node* root, int val){
    if(root==NULL){
        return new Node(val);
    }
    else if(val<root->data){
        root->left=insertBST(root->left,val);
    }
    else{
        root->right=insertBST(root->right,val);
    }
    return root;
}

bool search(Node* root, int key){
    if(root==NULL)return false;
    if(root->data==key) return true;

    else if(key<root->data){
        return search(root->left,key);
    }
    else return search(root->right,key);
}

