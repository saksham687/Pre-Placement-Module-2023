class Solution {
public:
bool solve(TreeNode* Tree, TreeNode* SubTree){

    if(Tree==NULL || SubTree==NULL)
        return (!Tree) && (!SubTree);
    
    if(Tree->val == SubTree->val)
        return solve(Tree->left, SubTree->left) && solve(Tree->right, SubTree->right);
    else
        return 0;
}

bool find(TreeNode* root, TreeNode* subRoot){
    
    if(root==NULL)
        return 0;
    
    if(root->val==subRoot->val){

        if(solve(root, subRoot))
            return 1;
        
    }
   
    return find(root->left, subRoot) || find(root->right, subRoot);      
}

bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    
    if(subRoot==NULL)
        return 1;
    
    if(root==NULL)
        return 0;
    
    return find(root, subRoot);
}
};