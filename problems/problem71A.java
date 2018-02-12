import java.io.*;
import java.util.*;


public class problem71A
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);
        int n=in.nextInt();
        String[] s = new String[200];
        for(int i=1;i<=n;i++)
        {
            s[i]=in.next();
        }
        for(int i=1;i<=n;i++)
        {
            if(s[i].length()>10)
                out.println(s[i].charAt(0)+ "" + (s[i].length()-2) + "" + s[i].charAt(s[i].length()-1));
            else
                out.println(s[i]);
        }
        out.flush();
    }
}
