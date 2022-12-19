package Recursion_core;
class Node {
    int data;
    Node left;
    Node right;

    Node(int v) {
        this.data = v;
        this.left = this.right = null;

    }

}

public class HeightBst {


    static int Height(Node node){



         if(node == null) return -1;


            int leftHeight=Height(node.left) ;
            int rightHeight =Height(node.right);
            int ans =Math.max(leftHeight, rightHeight);
         
        return ans;



    }


    // print the bst..
    public static void printInorder(Node node) {
        if (node == null)
            return ;

            printInorder(node.left);
            System.out.println(node.data);
            printInorder(node.right);


    }




    public static void main(String[] args) {


        Node root =new Node(10);
        root.left=new Node(20);
        root.right=new Node(30);
        root.left.left=new Node(40);
        root.left.right=new Node(50);
        root.right.left=new Node(60);
        root.right.right =new Node(70);

        printInorder(root);

        System.out.print("the bst height is:"+Height(root));

    }

}