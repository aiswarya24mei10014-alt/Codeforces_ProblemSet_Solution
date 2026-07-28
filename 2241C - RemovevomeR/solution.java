import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        StringBuilder sb = new StringBuilder();
        
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            String s = br.readLine().trim();
            
            int runs = 1;
            for (int i = 1; i < n; i++) {
                if (s.charAt(i) != s.charAt(i - 1)) runs++;
            }
            
            sb.append(runs == 2 ? 2 : 1).append("\n");
        }
        
        System.out.print(sb);
    }
}
