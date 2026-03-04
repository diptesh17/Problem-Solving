/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        vector<int>ans;
        map<int,int>mp;
        queue<pair<Node*,int>> q;
        
        q.push({root,0});
        
        while(!q.empty())
        {
            auto it = q.front();
            q.pop();
            Node* node = it.first;
            int hd = it.second;
     
            mp[hd] = node->data;
    
            
            if(node->left != NULL)
            q.push({node->left , hd-1});
            
            if(node->right != NULL)
            q.push({node->right , hd+1});
            
        }
        
        for(auto x : mp)
        {
            ans.push_back(x.second);
        }
        
        return ans;
    }
};