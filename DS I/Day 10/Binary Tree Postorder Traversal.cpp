/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
  vector<int> ans;
    
    TreeNode* curr = root;
    
    while(curr!=NULL)
    {
        if(curr->right==NULL)
        {
            ans.push_back(curr->val);
            curr=curr->left;
        }
        else
        {
            TreeNode* pred = curr->right;
            while(pred->left!=NULL && pred->left!=curr)
            {
                pred = pred->left;
            }
            if(pred->left==NULL)
            {
                ans.push_back(curr->val);
                pred->left = curr;
                curr=curr->right;
            }
            else
            {
                pred->left=NULL;
                curr=curr->left;
            }
        }
    }
    int low=0;
    int high=ans.size()-1;
    while(low<=high)
    {
        int temp = ans[low];
        ans[low] = ans[high];
        ans[high] = temp;
        low++;
        high--;
    }
    return ans;
    }
};