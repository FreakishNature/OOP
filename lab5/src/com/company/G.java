package com.company;

public class G extends F {
    protected String g;

    public G( String g) {
        super("f1");
        this.g = g;
    }

    public String convertToString() {
        return "G {" + "g ='" + g + '\'' + ", f ='" + f + '\'' + ", e ='" + e + '\'' + ", d ='" + d + '\'' + ", c ='" + c + '\'' + ", b ='" + b + '\'' + ", a ='" + a + '\'' + ", n =" + n + '}';
    }
}