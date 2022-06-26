/*
Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
*/
class Solution {
    public boolean isValidBST(TreeNode root) {
        Stack<TreeNode>stack =new Stack();
            double prev= -Double.MAX_VALUE;
            while(!stack.isEmpty() || root !=null){
                    while(root!=null){   //will traverse till the leftmost child/node and will add the nodes into the stack 
                            stack.push(root);  //adding the node into the stack
                            root=root.left;  //traversing to the left child of current node
                    }
                    root=stack.pop();  //will make the root from null to point to top node of stack and alse remove that node from srack
                    if(root.val <= prev)  //checking whether it's in correct form or not
                            return false;
                    prev=root.val;  //will update the comapring node for bst
                    root=root.right;  //will traverse to the right node of the root subtree 
            }
            return true;
    }
}