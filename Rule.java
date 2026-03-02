import java.util.Scanner;

public class DivisibleBy16 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int lastFour = num % 10000;

        if (lastFour % 16 == 0)
            System.out.println(num + " is divisible by 16");
        else
            System.out.println(num + " is not divisible by 16");
    }
}
