public class SumOfIntegers {
    public static void Sum() {
        long s = 0;
        for (int i = 0; i < 1000000; i++) {
            s += i;
        }
        System.out.println(s);
    }
    public static  void main(String[] args) {
        float start = System.nanoTime();
        Sum();
        float stop = System.nanoTime();
        float duration = (stop - start) / 1000;
        System.out.println("Time Taken: " + duration + " microseconds");
    }
}
