package Multithreading;

class MyRunnable implements Runnable {
    private int id;

    public MyRunnable(int id) {
        this.id = id;
    }

    public void run() {
        for (int i = 0; i < 10; ++i) {
            System.out.println("Hello " + id + " " + i);
        }
    }
}

public class ThreadTest1 {
    public static void main(String[] args) {
        Thread t1 = new Thread(new MyRunnable(0));
        Thread t2 = new Thread(new MyRunnable(1));
        t1.start();
        t2.start();
    }
}
