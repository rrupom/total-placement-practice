package Multithreading;

public class MainThread {
    public static void main(String[] args) {
        Thread t = Thread.currentThread();
        System.out.println("Current thread : "+t);
        System.out.println(t.threadId());
        t.setName("My Thread");
        System.out.println("After name change: "+t);

        try {
            for (int n = 5;n>0;n--) {
                System.out.println(n);
                Thread.sleep(1000);
            }
         } catch (InterruptedException e) {
            System.out.println("Main thread interrupted");
        }
    }
}
