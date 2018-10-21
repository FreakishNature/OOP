package com.company;

class CheckPars {
    String expresion;
    Stack paranthases;

    public boolean checkPars () {
        for(String ch : expresion.split("")){
            switch (ch) {
                case "(":
                    paranthases.push(1);
                    break;
                case ")":
                    if (!paranthases.isEmpty()) {
                        paranthases.pop();
                    } else {
                        System.out.println("Expression is wrong");
                        return false;
                    }
                    break;
            }
        }

        if(!paranthases.isEmpty()){
            System.out.println("Expression is wrong");
            return false;
        } else {
            System.out.println("Expression is right");
            return true;
        }
    }
    CheckPars(String expresion){
        this.expresion = expresion;
        paranthases = new Stack();
    }
}
