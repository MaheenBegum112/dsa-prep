class Bubblesort {

    public void bubble_sort(int[] arr, int n) {

        for (int i = 0; i < n - 1; i++) {

            for (int j = 0; j < n - i - 1; j++) {

                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        for (int nums : arr) {
            System.out.print(nums + " ");
        }
    }

    public static void main(String[] args) {

        int[] arr = {13, 46, 24, 52, 20, 9};
        int n = arr.length;

        Bubblesort sol = new Bubblesort();
        sol.bubble_sort(arr, n);
    }
}