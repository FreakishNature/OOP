package com.company;

public class E extends D {
    protected String e;

    public E( String e) {
        super("d1");
        this.e = e;
    }

    public String convertToString() {
        return "E {" + "e ='" + e + '\'' + ", d ='" + d + '\'' + ", c ='" + c + '\'' + ", b ='" + b + '\'' + ", a ='" + a + '\'' + ", n =" + n + '}';
    }
}