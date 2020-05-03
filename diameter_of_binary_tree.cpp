/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int findHeight(TreeNode* root){
        if (root==NULL) return -1;
        
            return 1 + max(findHeight(root->left), findHeight(root->right)); 
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        /*
        
        Diameter of a binary tree rooted at a node is defined as the follows
        1. The longest path contains the root node. In this case, find the farthest leaf in the right subtree
        and left subtree of this root node and add their repective distance.
        
        2. The longest path does not contain the root node. In this case, find the longest path in the left subtree
        and the right subtree. 
        
        3. Return the maximum of the 3 distances found above.
        */
        
        
        // 1. case
        
        if (root==NULL) return 0;
        int left_dist = 0, right_dist = 0, max_dist;
        if (root->left!=NULL)
            left_dist = findHeight(root->left) + 1;
        if (root->right!=NULL)
            right_dist = findHeight(root->right) + 1;
        
        
        max_dist = max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right));
        
        max_dist = max(max_dist, left_dist + right_dist);
        // cout <<max_dist<<endl;        
        return max_dist;
    }
};