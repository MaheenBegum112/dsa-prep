class Quicksort {

    public void Quick_Sort(int[] arr, int low, int high) {

        if (low < high) {

            int pivotIndex = partition(arr, low, high);

            Quick_Sort(arr, low, pivotIndex - 1);

            Quick_Sort(arr, pivotIndex + 1, high);
        }
    }


    public int partition(int[] arr, int low, int high) {

        int pivot = arr[high];

        int i = low - 1;

        for (int j = low; j < high; j++) {

            if (arr[j] < pivot) {

                i++;

                // swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        return i + 1;
    }


    public static void main(String[] args) {

        int[] arr = {10, 5, 2, 1, 9};

        int n = arr.length;

        Quicksort sol = new Quicksort();

        sol.Quick_Sort(arr, 0, n - 1);

        // Print sorted array
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}