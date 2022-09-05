/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL) return {};
        
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty())
        {
            int sz=q.size();
            vector<int> temp;
            while(sz--)
            {
                Node* front= q.front();
                q.pop();
                temp.push_back(front->val);
                
                for(int i=0;i<front->children.size();i++)
                {
                    if(front->children[i]) q.push(front->children[i]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};