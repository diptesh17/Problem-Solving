class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        queue<TreeNode*>q;

        q.push(root);

        if(root == NULL)
        return ans;

        while(!q.empty())
        {
            int s = q.size();
            vector<int>level;

            for(int i=0 ; i<s ; i++)
            {
                TreeNode* curr = q.front();
                level.push_back(curr->val);
                q.pop();

                if(curr->left != NULL)
                q.push(curr->left);

                if(curr->right != NULL)
                q.push(curr->right);
            }

            ans.push_back(level);
        }

        return ans;
        
    }
};