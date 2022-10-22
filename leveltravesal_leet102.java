class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        if(root==null)
            return res;
        q.add(root);
        while(q.size()!=0)
        {
            // root = q.remove();
            // q.add(root);
            if(root!=null)
            {
                int size = q.size();
                ArrayList<Integer> arr = new ArrayList<Integer>();
                System.out.println(size);
                // for(int i=0;i<size;i++)
                // {
                //     int val = q.remove();
                // }
                // if(size>2)
                //     size=2;
                for(int i=0;i<size;i++)
                {
                    root = q.remove();
                    int val = root.val;
                    arr.add(val);
                    if(root.left!=null)
                        q.add(root.left);
                    if(root.right!=null)
                        q.add(root.right);
                }
                if(arr.size()!=0)
                    res.add(arr);
                
            }
        }
        return res;
    }
}
