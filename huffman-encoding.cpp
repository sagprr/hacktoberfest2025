
struct Node {
    int data;
    Node *left, *right;
    
    Node(int data) {
        this->data = data;
        this->left = this->right = NULL;
    }
    
    Node(int data, Node *left, Node *right) {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
 
    struct Comparison {
        bool operator() (Node*a, Node*b) {
        return a->data > b->data; // for min heap
    }
};
 
class Solution
{
    vector<string> ans;
    void treeTraversal(Node *root, string s) {
        if (!root) return;
        
        if (!root->left && !root->right) {
            ans.push_back(s);
            return;
        }
        
        treeTraversal(root->left, s + "0");
        treeTraversal(root->right, s + "1");
    }
    
    public:
    vector<string> huffmanCodes(string S,vector<int> f,int N)
    {
        priority_queue<Node*, vector<Node*>, Comparison> pq;
        
        for (int i = 0; i < N; i++) {
            pq.push(new Node(f[i]));
        }
        
        while (pq.size() > 1) {
            Node *a = pq.top();
            pq.pop();
            
            Node *b = pq.top();
            pq.pop();
            
            Node *newNode = new Node(a->data + b->data, a, b);
            
            pq.push(newNode);
        }
        
        Node *root = pq.top();
        
        treeTraversal(root, "");
        
        return ans;
    }
};
