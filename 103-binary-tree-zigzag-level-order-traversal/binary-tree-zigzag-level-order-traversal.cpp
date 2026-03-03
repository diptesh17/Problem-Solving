class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        queue<TreeNode*>q;

        q.push(root);

        if(root == NULL)
        return ans;
        
        int rownum = 1;

        while(!q.empty())
        {
            int rownum = rownum + 1;
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

            if( rownum % 2 == 0)
            {
                reverse(level.begin() , level.end());
            }
            
            ans.push_back(level);
        }

        return ans;

        
    }
};