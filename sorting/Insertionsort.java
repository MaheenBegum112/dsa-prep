 //takes an element and places at it correct position
 class Insertionsort {
    public void insertion_sort(int[]arr,int n){
       for (int i = 1; i < n; i++) {
           int key=arr[i];
           int j=i-1;
           while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
           }
           arr[j+1]=key;
       }
       for(int nums: arr){
        System.out.print(nums +" ");
    }
    }
    
    public static void main(String[] args) {
        int[] arr={10,5,2,1,9};
        int n=arr.length;
        Insertionsort sol= new Insertionsort();
        sol.insertion_sort(arr, n);

    }
}
