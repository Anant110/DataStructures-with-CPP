vector<int> printLeftView(BinaryTreeNode<int>* root) {
    // Write your code here.
    queue<BinaryTreeNode<int>*> qu;

    vector<int> result;
    qu.push(root);

    while(!qu.empty()){
        int size=qu.size();
        for(int i=0;i<size;i++){
            BinaryTreeNode<int>* node=qu.front();
            qu.pop();

            if(i==0) result.push_back(node->data);

            if(node->left){
                qu.push(node->left);
            }

            if(node->right){
                qu.push(node->right);
            }
        }
    }

    return result;
}