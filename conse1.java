import java.util.*;

public class conse1{

    public static void solve(int n,List<Character>temp,List<List<Character>>ans){

        if(temp.size() == n){
            ans.add(new ArrayList<>(temp));
            return;
        }

        temp.add('0');
        solve(n,temp,ans);
        temp.remove(temp.size()-1);

        if(temp.isEmpty() || temp.get(temp.size()-1) != '1'){
            temp.add('1');
            solve(n,temp,ans);
            temp.remove(temp.size()-1);

        }
    }


    public static void main(String args[]){

        int n= 3;
        List<List<Character>>ans = new ArrayList<>();
        List<Character>temp = new ArrayList<>();

        solve(n,temp,ans);
        System.out.println(ans);
    }
}