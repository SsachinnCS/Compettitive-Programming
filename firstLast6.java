class firstLast6{

public static boolean firstLast6(int[] nums) {
  int n = nums.length;
  if(n==0)return false;
  if(nums[0] == 6 || nums[n-1] == 6)return true;
  else return false;
}


    public static void main(String args[]){

  int[] nums = {60, 20, 30, 60};
    System.out.println(firstLast6(nums));
  
}

    
}