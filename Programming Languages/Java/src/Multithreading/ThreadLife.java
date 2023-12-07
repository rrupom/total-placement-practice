package Multithreading;

import java.beans.IntrospectionException;

class NThread implements Runnable {
    Thread t;
    String name;
    NThread(String name) {
        this.name = name;
        t = new Thread(this,this.name);
        System.out.println("New Thread: "+t);
    }

    public void run() {
        try {
            for(int i=5;i>0;i--) {
                System.out.println(name + " : "+i);
                Thread.sleep(500);
            }
        } catch(InterruptedException e) {
            System.out.println(name + " interrupted.");
        }

        System.out.println(name + " exiting");
    }
}
public class ThreadLife {
    public static void main(String[] args) {
        NThread nt1 = new NThread("One");
        NThread nt2 = new NThread("Two");
        NThread nt3 = new NThread("three");
        NThread nt4 = new NThread("four");

        nt1.t.start();
        nt2.t.start();
        nt3.t.start();

        System.out.println("Thread One is alive: "+ nt1.t.isAlive());
        System.out.println("Thread Two is alive: "+ nt2.t.isAlive());
        System.out.println("Thread Three is alive: "+nt3.t.isAlive());

        try {
            System.out.println("Waiting for threads to finish.");
            nt1.t.join();
            nt2.t.join();
            nt3.t.join();
            nt4.t.start();
            nt4.t.join();
        } catch (InterruptedException e) {
            System.out.println("Main Thread Interrupted");
        }

        System.out.println("Thread One is alive: "+ nt1.t.isAlive());
        System.out.println("Thread Two is alive: "+ nt2.t.isAlive());
        System.out.println("Thread Three is alive: "+nt3.t.isAlive());

        System.out.println("Main thread exiting");

    }
}
