import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();
        long m = scanner.nextLong();
        long a = scanner.nextLong();
        
        long rows = (n + a - 1) / a;  // ceil(n/a)
        long cols = (m + a - 1) / a;  // ceil(m/a)
        
        System.out.println(rows * cols);
    }
}
