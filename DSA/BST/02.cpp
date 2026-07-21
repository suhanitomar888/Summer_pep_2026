// https://leetcode.com/problems/insert-into-a-binary-search-tree/submissions/2074047092/
/*
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)return new TreeNode(val);
        if(val < root->val){
            root->left=insertIntoBST(root->left, val);
        }else{
            root->right=insertIntoBST(root->right, val);
        }
        return root;
    }
};
*/

// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/
// https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/
// https://leetcode.com/problems/validate-binary-search-tree/description/ 
// ps://www.geeksforgeeks.org/problems/predecessor-and-successor/1
// https://leetcode.com/problems/delete-node-in-a-bst/