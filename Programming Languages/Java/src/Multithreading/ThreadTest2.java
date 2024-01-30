package Multithreading;

class MyThread extends Thread {
    private int id;

    MyThread(int id) {
        this.id = id;
    }

    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("Hello thread " + id + " " + i);
        }
    }
}

public class ThreadTest2 {
    public static void main(String[] args) {
        Thread t1 = new MyThread(0);
        Thread t2 = new MyThread(1);

        t1.start();
        System.out.println("In the main thread");
        t2.start();
    }
}
