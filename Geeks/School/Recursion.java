package Geeks.School;

public class Recursion {

    public static void printTillN(int n) {
        if (n == 0) {
            return;
        }
        printTillN(n - 1);
        System.out.println(n);
    }

    public static void main(String[] args) {
        printTillN(5);
    }
    
}
