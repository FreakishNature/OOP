package com.company;

public class H extends G {
    protected String h;
    private N n= new N("N1");
    public H( String h) {
        super("g1");
        this.h = h;
    }

    public String convertToString() {
        return "H {" + "h ='" + h + '\'' + ", g ='" + g + '\'' + ", f ='" + f + '\'' + ", e ='" + e + '\'' + ", d ='" + d + '\'' + ", c ='" + c + '\'' + ", b ='" + b + '\'' + ", a ='" + a + '\'' + ", x =" + n + '}';
    }
}