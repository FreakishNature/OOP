package com.company;

class Node{
    public Node next = null;
    public int data = 0;

    Node(int data){
        this.data = data;
    }

    Node(int data,Node next){
        this.data = data;
        this.next = next;
    }
}

public class Stack {
    Node head = null;
    int size = 0;

    public void push(int n){
        if(head == null){
            head = new Node(n);
        } else {
            Node tmp = head;

            while(tmp.next != null){
                tmp = tmp.next;
            }

            tmp.next = new Node(n);

        }
        size++;
    }

    public int pop(){
        if(head != null){
            if(head.next == null){
                int data = head.data;
                head = null;
                size--;
                return data;
            }
            Node tmp = head;

            while(tmp.next != null){
                tmp = tmp.next;
            }

            int data = tmp.data;
            tmp = null;
            size--;

            return data;
        }

        System.out.println("Stack is empty");
        return 0;
    }

    public boolean isEmpty(){
        return size == 0;
    }
}

