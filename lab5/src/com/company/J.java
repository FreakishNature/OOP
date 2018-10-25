package com.company;

public class J extends I {
    protected String j;

    public J( String j) {
        super("f1");
        this.j = j;
    }

    public String convertToString() {
        return "J {" + "j ='" + "..." + g + '\'' + ", f ='" + f + '\'' + ", e ='" + e + '\'' + ", d ='" + d + '\'' + ", c ='" + c + '\'' + ", b ='" + b + '\'' + ", a ='" + a + '\'' + ", n =" + n + '}';
    }
}
