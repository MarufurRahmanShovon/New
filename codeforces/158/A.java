import java.util.Scanner;


public class NextRound {

   
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        
      int n=scan.nextInt();
      int k=scan.nextInt();
             
      int a[]=new int [100];
      int ans=0;
      for(int i=0;i<n;i++){
          a[i]=scan.nextInt();
      }
      for(int i=0;i<n;i++){
          if(a[i]>=a[k-1]&&a[i]!=0)
              ans++;
      }
        System.out.println(ans);
    }
      
    
}