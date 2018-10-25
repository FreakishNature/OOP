package com.company;

public class B extends A {
    protected String b;

    public B( String b) {
        super("a1");
        this.b = b;
    }

    public String convertToString() {
        return "B{" + "b ='" + b + '\'' + ", a ='" + a + '\'' + ", n =" + n + '}';
    }
}