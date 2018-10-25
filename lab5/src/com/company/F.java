package com.company;

public class F extends E {
    protected String f;

    public F(String f) {
        super("e1");
        this.f = f;
    }

    public String convertToString() {
        return "F {" + "f ='" + f + '\'' + ", e ='" + e + '\'' + ", d ='" + d + '\'' + ", c ='" + c + '\'' + ", b ='" + b + '\'' + ", a ='" + a + '\'' + ", n =" + n + '}';
    }
}