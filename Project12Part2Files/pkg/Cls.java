package pkg;

public class Cls {
    native double f(double d, String s);
    native int f(int i, String s);
    static {
        System.loadLibrary("pkg_Cls");
    }
    
    public static void main(String[] args)
    {
        double d = (new Cls()).f(10.0, "Fruzzetti");
        System.out.println("native method returned " + d);
        int i = (new Cls()).f(5, "Fruzzetti");
        System.out.println("native method returned " + i);
    }
}