package com.company;

public class I extends H {
    String i;
    protected N n= new N("N2");

    public I( String i) {
        super("h1");
        this.i = i;
    }

    public I(){
        super("h2");
    }

    public String convertToString() {
        return "I {" + "i ='" + i + '\'' + ", h ='" + h + '\'' + ", g ='" + g + '\'' + ", f ='" + f + '\'' + ", e ='" + e + '\'' + ", d ='" + d + '\'' + ", c ='" + c + '\'' + ", b ='" + b + '\'' + ", a ='" + a + '\'' + ", n =" + n + '}';
    }
}