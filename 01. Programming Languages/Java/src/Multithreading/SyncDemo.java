package Multithreading;

class Rupom {
    public void call(String message) {
        System.out.print("[" + message);
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            System.out.println("Thread Interrupter");
        }
        System.out.println("]");
    }
}

class Rakib implements Runnable {
    String message;
    Thread t;
    Rupom rupom;

    Rakib(Rupom rupom, String message) {
        this.rupom = rupom;
        this.message = message;
        t = new Thread(this);
    }

    public void run() {
        synchronized (this.rupom) {
            this.rupom.call(this.message);
        }
    }
}

public class SyncDemo {
    public static void main(String[] args) {
        Rupom rupom = new Rupom();
        Rakib ob1 = new Rakib(rupom, "Hello");
        Rakib ob2 = new Rakib(rupom, "World");
        Rakib ob3 = new Rakib(rupom, "HappyRakib");

        ob1.t.start();
        ob2.t.start();
        ob3.t.start();

        try {
            ob1.t.join();
            ob2.t.join();
            ob3.t.join();
        } catch (InterruptedException e) {
            System.out.println("Interrupter");
        }
    }
}
