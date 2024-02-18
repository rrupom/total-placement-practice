package Multithreading;

class NewThread3 implements Runnable {
    public void run() {
        try {
            for(int i=5;i>0;i--) {
                System.out.println("Child Thread: "+i);
                Thread.sleep(500);
            }
        } catch(InterruptedException e) {
            System.out.println("Child Thread exception");
        }
        System.out.println("Child Thread exiting");
    }
}
public class ThreadDemo3 {
    public static void main(String[] args) {
        NewThread3 nt = new NewThread3();
        Thread t = new Thread(nt,"Rupom");
        t.start();

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
