package Multithreading;

class Callme {
    synchronized void call(String message) {
        System.out.print("[" + message);
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            System.out.println("Interrupter");
        }
        System.out.println("]");
    }
}

class Caller implements Runnable {
    String message;
    Callme target;
    Thread t;

    public Caller(Callme targ, String s) {
        this.target = targ;
        this.message = s;
        t = new Thread(this);
    }
    public void run() {
        target.call(this.message);
    }
}

public class Synchronization {
    public static void main(String[] args) {
        Callme target = new Callme();
        Caller ob1 = new Caller(target,"Hello");
        Caller ob2 = new Caller(target,"Synchronized");
        Caller ob3 = new Caller(target,"World");

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
