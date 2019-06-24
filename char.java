import java.io.*;
import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc=new Scanner(System.in);
        String s;
        s=sc.nextLine();
        ArrayList<Character> a=new ArrayList<Character>();
        for(int i=0;i<s.length();i++)
        {
            if(a.contains(s.charAt(i)))continue;
            else a.add(s.charAt(i));
        }
        System.out.println(a.size());
    }
}
