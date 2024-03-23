#include<bits/stdc++.h>
using namespace std;

class TreeNode{

public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
TreeNode* buildT(vector<int> &nums){
    if(nums.size()==0)
    return NULL;

    TreeNode* root=new TreeNode(nums[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i=1;
    int n=nums.size();
    while(i<n){

        TreeNode* curr=q.front();
        q.pop();

        if(i<n)
        {curr->left=new TreeNode(nums[i++]);
        q.push(curr->left);
        }

        if(i<n)
        {curr->right=new TreeNode(nums[i++]);
        q.push(curr->right);
        }

    }
    return root;
}

void levelorder(TreeNode* root){

    vector<vector<int>> ans;
    if(root==NULL)
    return;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){

        int size=q.size();
        vector<int> level(size);

        for(int i=0;i<size;i++){

            TreeNode* node=q.front();
            q.pop();

            if(node->left) q.push(node->left);
            if(node->right)  q.push(node->right);

            cout<<node->data<<" ";

        }
    }

}



void print(TreeNode* root){

    if(!root)   return;

    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
/*
void buildTree(TreeNode* root, int data){
        if(!root)   
       { TreeNode* root=new TreeNode(data);
       return;}

        if(data==-1) return;

        cout<<"Enter data in left node: ";
        buildTree(root->left,data);

        cout<<"Enter data in right node: ";
        buildTree(root->right,data); 
}
*/
int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9};

    TreeNode* root = buildT(nums);
    print(root);
    cout<<"level order:"<<endl;
    levelorder(root);
}