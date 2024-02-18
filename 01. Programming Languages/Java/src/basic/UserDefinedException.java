package basic;

import java.util.Scanner;

class InvalidBalanceException extends  Exception {
    public InvalidBalanceException(String message) {
        super(message);
    }
}
public class UserDefinedException {
    public static void main(String[] args) {
        int balance;
        Scanner sc = new Scanner(System.in);
        balance = sc.nextInt();
        try{
            updateBalance(balance);
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }
    public static void updateBalance(int balance) throws InvalidBalanceException {
        if(balance <= 0){
            throw new InvalidBalanceException("Account balance cannot be less than zero");
        }
        System.out.println("No exception occurred in UpdateBalance() method");
    }
}
