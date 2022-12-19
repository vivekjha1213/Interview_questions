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

public class BstTraverse {

    public static void printInorder(Node node) {
        if (node == null)
            return;

        printInorder(node.left);
        System.out.println(node.data + " ");

        printInorder(node.right);

    }

    public static void printpostorder(Node node) {

        if (node == null)
            return;
        System.out.println(node.data);
        printpostorder(node.right);
        printpostorder(node.right);

    }

    public static void printpreorder(Node node){
        if(node == null) return;

        printpostorder(node.left);
        printpostorder(node.right);
        System.out.println(node.data+" ");
    }



    public static void main(String[] args) {

        Node root = new Node(100);
        root.left = new Node(20);
        root.right = new Node(10);
        root.left.left = new Node(30);
        root.left.right = new Node(40);
        root.right.left = new Node(50);
        root.right.right = new Node(60);

        System.out.print(" ");
        printInorder(root);
        printpostorder(root);
        printpreorder(root);

    }

}
