import java.io.*;
import java.util.*;

public class problem4A{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);
        int a=in.nextInt();
        if(a%2==0 && a>2)
            out.println("YES");
        else
            out.println("NO");
        out.flush();
    }
}
