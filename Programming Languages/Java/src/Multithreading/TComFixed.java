package Multithreading;

class Que {
    int n;
    boolean produced = false;
    synchronized int get() {
        while (!produced) {
            try {
                wait();
            } catch (InterruptedException e) {
                System.out.println("Interruption Occured");
            }
        }
        System.out.println("Got: "+this.n);
        produced = false;
        notify();
        return n;
    }

    synchronized void put(int n) {
        while (produced) {
            try {
                wait();
            } catch (InterruptedException e) {
                System.out.println("Interruption occured");
            }
        }
        this.n = n;
        System.out.println("Put: "+n);
        produced = true;
        notify();
    }
}

class Producerr implements Runnable {
    Que q;
    Thread t;

    Producerr(Que q) {
        this.q = q;
        t = new Thread(this,"Producer");
    }
    public void run() {
       int i = 0;
       while (true) {
           q.put(i++);
       }
    }
}

class Consumerr implements Runnable {
    Que q;
    Thread t;

    Consumerr(Que q) {
        this.q = q;
        t = new Thread(this,"Consumer");
    }

    public void run() {
        while (true) {
            q.get();
        }
    }
}
public class TComFixed {
    public static void main(String[] args) {
        Que q = new Que();
        Producerr p = new Producerr(q);
        Consumerr c = new Consumerr(q);

        p.t.start();
        c.t.start();

    }
}
