


class SumInLeavesVisitor extends TreeVis {

    int sumInLeaves = 0;

    public int getResult() {
        return sumInLeaves;
    }

    public void visitNode(TreeNode node) {
        // empty return
    }

    public void visitLeaf(TreeLeaf leaf) {
        sumInLeaves += leaf.getValue();
    }
}

class ProductOfRedNodesVisitor extends TreeVis {
    long productOfRedNodes = 1L;

    public int getResult() {
        return (int) (productOfRedNodes);
    }

    void multiply(Tree tree) {
        if (tree.getColor() == Color.RED)
            productOfRedNodes = (productOfRedNodes * tree.getValue()) % (1000000007);
    }

    public void visitNode(TreeNode node) {
        multiply(node);
    }

    public void visitLeaf(TreeLeaf leaf) {
        multiply(leaf);
    }
}

class FancyVisitor extends TreeVis {
    int sumOfValuesNonLeafEvenDepth = 0;
    int sumOfValuesGreenLeaf = 0;

    public int getResult() {

        return Math.abs(sumOfValuesGreenLeaf - sumOfValuesNonLeafEvenDepth);
    }

    public void visitNode(TreeNode node) {
        if (node.getDepth() % 2 != 0) return;
        sumOfValuesNonLeafEvenDepth += node.getValue();
    }

    public void visitLeaf(TreeLeaf leaf) {
        if (leaf.getColor() != Color.GREEN) return;
        sumOfValuesGreenLeaf += leaf.getValue();
    }
}

public class Solution {
    static Map<Integer, Tree> tree = new HashMap<>();

    public static Tree solve() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Map<Integer, Object[]> nodeAtts = new HashMap<Integer, Object[]>();

        for (int i = 0; i < n; i++)
            nodeAtts.put(i + 1, new Object[]{sc.nextInt(), null});

        for (int i = 0; i < n; i++)
            nodeAtts.get(i + 1)[1] = sc.nextInt() == 0 ? Color.RED : Color.GREEN;

        Map<Integer, ArrayList<Integer>> edges = new HashMap<Integer, ArrayList<Integer>>();

        for (int i = 1; i <= n; i++)
            edges.put(i, new ArrayList<Integer>());

        for (int i = 1; i < n; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();
            edges.get(u).add(v);
            edges.get(v).add(u);
        }
        Tree root = new TreeNode((Integer) nodeAtts.get(1)[0], (Color) nodeAtts.get(1)[1], 0);
        tree.put(1, root);

        DFS(n, edges, nodeAtts);
        return tree.get(1);
    }

    private static void DFS(int n, Map<Integer, ArrayList<Integer>> edges, Map<Integer, Object[]> nodeAtts) {
        boolean[] visited = new boolean[n + 1];
        TreeNode parent = (TreeNode) tree.get(1);
        DFSUtil(parent, 1, visited, edges, nodeAtts);

    }

    private static void DFSUtil(TreeNode parent, int v, boolean[] visited, Map<Integer, ArrayList<Integer>> edges, Map<Integer, Object[]> nodeAtts) {
        visited[v] = true;
        if (edges.get(v).size() == 1 && v != 1) {
            TreeLeaf treeLeaf = new TreeLeaf((Integer) nodeAtts.get(v)[0], (Color) nodeAtts.get(v)[1], parent.getDepth() + 1);
            parent.addChild(treeLeaf);
            tree.put(v, treeLeaf);
            return;
        }

        TreeNode treeNode;
        if (v != 1) {
            treeNode = new TreeNode((Integer) nodeAtts.get(v)[0], (Color) nodeAtts.get(v)[1], parent.getDepth() + 1);
            parent.addChild(treeNode);
            tree.put(v, treeNode);

        } else
            treeNode = (TreeNode) tree.get(1);

        Iterator<Integer> iterator = edges.get(v).iterator();
        while (iterator.hasNext()) {
            int n = iterator.next();
            if (!visited[n]) {
                DFSUtil(treeNode, n, visited, edges, nodeAtts);
            }
        }
    }

