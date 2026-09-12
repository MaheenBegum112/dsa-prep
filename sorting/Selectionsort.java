//finding the small element and keeping at its beginning
class Selectionsort{
    public void selection_sort(int[]arr,int n){
        for (int i = 0; i < n; i++) {
            int min=i;
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[min]){
                   min=j; 
                }        
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    for (int num : arr) {
    System.out.print(num + " ");
}
    }
     public static void main(String[] args) {
        int[] arr={10,5,2,1,9};
        int n=arr.length;
        Selectionsort sol= new Selectionsort();
        sol.selection_sort(arr, n);

    }
}