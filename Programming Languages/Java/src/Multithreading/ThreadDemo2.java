package Multithreading;

class NewThread2 extends Thread {
    NewThread2() {
        super("Demo Thread");
        System.out.println("Child Thread: "+this);
    }

    public void run() {
        try {
            for(int i=5;i>0;i--) {
                System.out.println("Child Thread: "+i);
                Thread.sleep(500);
            }
        } catch (InterruptedException e) {
            System.out.println("Child Thread Interrupted");
        }
        System.out.println("Child Thread Exiting");
    }
}

public class ThreadDemo2 {
    public static void main(String[] args) {
        NewThread2 nt = new NewThread2();
        nt.start();

        try {
            for(int i=5;i>0;i--) {
                System.out.println("Main Thread: "+i);
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            System.out.println("Main thread exception");
        }

        System.out.println("Main thread exiting");
    }
}
