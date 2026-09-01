 public class frequencycount {
  
    public void countFreq(int[] arr, int n) {
        
        boolean[] visited = new boolean[n];

       
        for (int i = 0; i < n; i++) {
           
            if (visited[i])
                continue;

            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    visited[j] = true; 
                    count++;
                }
            }

            
            System.out.println(arr[i] + " " + count);
        }
    }

    public static void main(String[] args) {
        // Input array
        int[] arr = {10, 5, 10, 15, 10, 5};
        int n = arr.length;

     
        frequencycount s = new frequencycount();

        
        s.countFreq(arr, n);
    }
}