package basic;

class SingletonWithLazyInitialization {
    private static SingletonWithLazyInitialization instance;

    private SingletonWithLazyInitialization() {

    }

    public static SingletonWithLazyInitialization getInstance() {
        if (instance == null) {
            instance = new SingletonWithLazyInitialization();
        }

        return instance;
    }

    void showMessage() {
        System.out.println("Singleton instance");
    }
}

class SingletonWithEagerInitialization {
    private static final SingletonWithEagerInitialization instance = new SingletonWithEagerInitialization();

    private SingletonWithEagerInitialization() {
    }

    public static SingletonWithEagerInitialization getInstance() {
        return instance;
    }

    public void showMessage() {
        System.out.println("I am very exited to learn java programming language");
    }
}

public class SingletonDemo {
    public static void main(String[] args) {
        SingletonWithLazyInitialization singleton = SingletonWithLazyInitialization.getInstance();
        singleton.showMessage();

        SingletonWithEagerInitialization singleton2 = SingletonWithEagerInitialization.getInstance();

        singleton2.showMessage();
    }
}
