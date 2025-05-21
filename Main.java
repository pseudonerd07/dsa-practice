import java.util.*;

public class Main{ 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        // System.out.println(s);
        int len = s.length();
        while(len-- > 0){
            if(s.charAt(len) == ' ' || s.charAt(len) == '?'){
                continue;
            }
            else{
                if(isVowel(s.charAt(len))){
                    System.out.println("YES");
                    break;
                }
                else{
                    System.out.println("NO");
                    break;
                }
            }
        }
    }

    public static boolean isVowel(char ch){
        Character x = Character.toLowerCase(ch);
        if(x == 'a' || x == 'e' || x =='i' || x =='o' || x == 'u' || x == 'y')return true;
        return false;
    }
}