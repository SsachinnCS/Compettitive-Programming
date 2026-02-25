import java.util.*;

public class subseu{

    public static void solve(int i,int[] arr,List<List<Integer>>ans,int target,List<Integer>temp){

        if(i == arr.length){
            if(target == 0)ans.add(new ArrayList<>(temp));
            return;
        }

        if(arr[i]<=target){
            temp.add(arr[i]);
            solve(i,arr,ans,target-arr[i],temp);
            temp.remove(temp.size()-1);

        }

        solve(i+1,arr,ans,target,temp);
    }

    public static void main(String args[]){

        int[] arr = {2,3,6,7};
        List<List<Integer>>ans = new ArrayList<>();
        int target = 7;
        solve(0,arr,ans,target,new ArrayList<>());

        System.out.println(ans);
    }
}