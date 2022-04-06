//inorderTraversal algorithm

void left_push(stack<TreeNode*>&arr,TreeNode*root){
        while(root){
            if(root->left) arr.push(root->left);
            root = root->left;
        }
    }
    
vector<int> inorderTraversal(TreeNode* root) {
    vector<int>res;
    stack<TreeNode*>arr;
    if(!root) return res;
    arr.push(root);
    left_push(arr,root);
    while(!arr.empty()){
        TreeNode* check = arr.top();
        arr.pop();
        res.push_back(check->val);
        if(check->right) {
            arr.push(check->right);
            left_push(arr,check->right);
        }
    }
    return res;
}

// preOrder Traversal algorithm

vector<int> preorderTraversal(TreeNode* root) {
    stack<TreeNode*>arr;
    vector<int>res;
    if(!root) return res;
    arr.push(root);
    
    while(!arr.empty()){
        TreeNode* check = arr.top();
        res.push_back(check->val);
        arr.pop();
        if(check->right != nullptr) arr.push(check->right);
        if(check->left != nullptr) arr.push(check->left);
    }
    return res;
}

// postOrder Traversal algorithm

// Excillent solution;
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>arr;
        vector<int>res;
        if(!root) return res;
        arr.push(root);

        while(!arr.empty()){
            TreeNode* check = arr.top();
            res.push_back(check->val);
            arr.pop();
            if(check->left != nullptr) arr.push(check->left);
            if(check->right != nullptr) arr.push(check->right);
        }
        reverse(res.begin(),res.end());
        return res;
    }


// create binary tree

struct Node{
    int data;
    struct Node *left, *right;
} * root;

Node *create_node(int data){
    Node *node = new Node;
    node->data = data;
    node->right = node->left = NULL;
    return node;
}

Node *remove_null_nodes(Node *root){
    if (root == NULL || root->data == INT_MAX)
        return NULL;

    root->left = remove_null_nodes(root->left);
    root->right = remove_null_nodes(root->right);

    return root;
}

Node *insert_node(Node *root, int value, queue<Node *> &queue){
    Node *new_node = create_node(value);
    if (root == NULL)
        root = new_node;
    else if (queue.front()->left == NULL)
        queue.front()->left = new_node;
    else
    {
        queue.front()->right = new_node;
        queue.pop();
    }

    if (value != INT_MAX)
        queue.push(new_node);
    return root;
}

void build_tree(){
    string temp;
    queue<Node *> queue;
    while (cin >> temp)
    {
        if (temp == "null")
            root = insert_node(root, INT_MAX, queue);
        else
            root = insert_node(root, stoi(temp), queue);
    }
    root = remove_null_nodes(root);
}


int main(){
    build_tree();
    check_full_binary_tree(root) ? cout << "True" : cout << "False";
    return 0;
}



