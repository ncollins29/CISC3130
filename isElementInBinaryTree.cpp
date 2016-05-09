//Homework 5 on Binary Trees. Write the function isElementInBinaryTree.

int isElementInBinaryTree(BinaryTreeNode *root, int search_item) {
    if(root == NULL) {
        return;
    else if(root == search_item)
        return root;
    else if(root -> left == NULL && root -> right == NULL)
        return;
    else(root -> left == search_item|| root -> right == search_item)
        return root;
    
    }
    
    return 0;
}
