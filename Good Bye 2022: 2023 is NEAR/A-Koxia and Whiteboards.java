import java.util.*;

public class main {
    public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      int t=sc.nextInt();
      while(t-->0){
          int n=sc.nextInt();
          int m=sc.nextInt();
          
          PriorityQueue<Long> pq = new PriorityQueue<>();
          long[] a1 =new long[n];
          long[] a2 =new long[m];
          long sumf=0;
          for(int i=0;i<n;i++){
              a1[i]=sc.nextLong();
              pq.add(a1[i]);
          }
          for(int i=0;i<m;i++){
              a2[i]=sc.nextLong();
          }
          for(long a:a2){
              long val=pq.remove();
              pq.add(a);
          }
          long sum=0;
          while(pq.size()!=0){
              sum+=(pq.remove());
          }
          System.out.println(sum);
      }

    }
}