   
    if(root==NULL){
       return NULL;
   }
    if(root->val==val){
        return root;
    }
     if(val < root->val){
        return searchBST(root->left,val);
    }else{
        return searchBST(root->right,val);
    }

    
  //Iterative way
    
    while(root!=NULL){
        if(root->val==val){
            return root;
        }
        else if(root->val<val){
            root = searchBST(root->right,val);
        }
        else{
           root =  searchBST(root->left,val);
        }
    }
    
    
    return nullptr;

}