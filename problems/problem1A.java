import java.io.*;
import java.util.*;
import java.lang.*;
import java.math.*;

public class problem1A
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);
        long a=in.nextLong();
        long b=in.nextLong();
        long c=in.nextLong();
        out.println((a+c-1)/c*((b+c-1)/c));
        out.flush();
    }
}
