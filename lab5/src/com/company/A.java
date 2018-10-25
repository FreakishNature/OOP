package com.company;

public class A {
    protected String a;
    protected N n = new N("A1");

    public A(String a) {
        this.a = a;
    }

    public String toString() {
        return "A {" + "a ='" + a + '\'' + ", x = " + n + '}';
    }
}