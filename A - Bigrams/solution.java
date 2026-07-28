import java.io.*;
import java.util.*;
public class Bigrams {
    public static void main(String[] args) throws IOException {
        DataInputStream in = new DataInputStream(new BufferedInputStream(System.in,1<<16));
        StringBuilder sb = new StringBuilder();
        int t =nextInt(in);
        while(t-->0){
            int k =nextInt(in);
            int[] c = new int[k];
            for(int i=0;i<k;i++) c[i]=nextInt(in);
            boolean hasTripleOrMore = false;
            int countAtLeastTwo = 0;
            for(int i =0;i<k;i++){
                if(c[i] >= 3) hasTripleOrMore = true;
                if(c[i] >= 2) countAtLeastTwo++;
            }
            boolean ans = hasTripleOrMore ||countAtLeastTwo >=2;
            sb.append(ans ?"YES":"NO").append('\n');
        }
        System.out.print(sb);
    }
    private static int nextInt(DataInputStream in) throws IOException {
        int ret = 0;
        int b = in.read();
        while(b<'0'||b>'9') b = in.read();
        while(b>= '0'&& b<='9'){
            ret =ret*10+(b-'0');
            b=in.read();
        }
        return ret;
    }
}
