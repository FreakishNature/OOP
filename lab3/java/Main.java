package com.company;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {

        try (BufferedReader br = new BufferedReader(new FileReader("/Users/liza/Documents/UTM/Anul2/POPA/OOP/Lab4/src/com/company/filename.txt"))) {
            String line;
            String data = "";
            while ((line = br.readLine()) != null) {
                if (line == null)
                    break;
                data += line;
                line = br.readLine();
            }

            CheckPars paranthasesTester = new CheckPars(data);

            paranthasesTester.checkPars();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

