package com.company;

public class C extends B {
    protected String c;

    public C(String c) {
        super("b1");
        this.c = c;
    }

    public String convertToString() {
        return "C {" + "c ='" + c + '\'' + ", b ='" + b + '\'' + ", a ='" + a + '\'' + ", x=" + n + '}';
    }
}