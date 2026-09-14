import java.util.*;
class frequencycount{
    public void freqcount(int[] arr,int n){
        HashMap<Integer, Integer> map = new HashMap<>();

        // Traverse the array and count frequencies
        for (int i = 0; i < n; i++) {
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }

        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
    }

        
 public static void main(String[] args) {
        int[] arr={10,5,2,10};
        int n=arr.length;
        frequencycount sol= new frequencycount();
        sol.freqcount(arr, n);

    }
}