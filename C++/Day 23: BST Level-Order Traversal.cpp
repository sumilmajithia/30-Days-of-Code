#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
        int getHeight(Node* root)
        {
            if (root == nullptr)
              return -1;
            int left=0, right=0;
            left = getHeight(root -> left);
            right= getHeight(root-> right);
            
            return max(left,right)+1;
            
        }
	
void levelOrder(Node * root)
    {
      queue<Node*> que;
     que.push(root);
     while(!que.empty())
     {
        Node* node = que.front();
        que.pop();
        printf("%d ",(node->data));
         
         if (node->left != nullptr)
            que.push(node->left);
         if (node->right != nullptr)
        que.push(node->right);
            
     }
  
	}
  };//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
