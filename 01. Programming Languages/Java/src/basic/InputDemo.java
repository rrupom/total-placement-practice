package basic;

import java.io.*;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Scanner;

public class InputDemo {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        String s = br.readLine();
//        System.out.println(s);

        Scanner sc = new Scanner(System.in);
//        int x = sc.nextInt();
//        System.out.println(x);
//        String name = sc.nextLine();
//        System.out.println(name);
//        System.out.println();

        Scanner sc2 = new Scanner(new FileInputStream("src/rupom.txt"));
        String text = sc2.nextLine();
        System.out.println(text);

        Path path = Paths.get("");
        System.out.println(path.toAbsolutePath().toString());
    }
}

