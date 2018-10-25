package com.company;

public class D extends C {
    protected String d;
    protected N n= new N("Aliona");
    public D(String d) {
        super("c1");
        this.d = d;
    }

    public String convertToString() {
        return "D {" + "d ='" + d + '\'' + ", c ='" + c + '\'' + ", b ='" + b + '\'' + ", a ='" + a + '\'' + ", n =" + n + '}';
    }
}