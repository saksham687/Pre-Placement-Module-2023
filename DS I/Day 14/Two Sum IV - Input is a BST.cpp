class Solution {
public:
    vector<int>v; //global vector
    bool findTarget(TreeNode* root, int target) {
        preorder(root);
       
        
        int l=0;  //left pointer
        int r=v.size()-1; //right pointer
        for(int i= 0; i<v.size();i++)
        {
            cout<<v[i]<<endl;
        }
        while(l<r)
        {
            if(v[l]+v[r]==target)
            {
                return true;
            }
            else if(v[l]+v[r]>target)
            {
                r--;
            }
            else l++;
        }
        return false;
    }
     void preorder(TreeNode*root)  // pre order traversal
    {
        if(root==NULL)
        {
          return ;
        }
       
        preorder(root->left);
          v.push_back(root->val);
        preorder(root->right);
        
        
    }
    
};