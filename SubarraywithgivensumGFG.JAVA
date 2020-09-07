import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
 {
 public static void main (String[] args)
  {
 Scanner ab=new Scanner(System.in);
 int t=ab.nextInt();
 st:
 while(t-->0)
 {
     int n=ab.nextInt();
     int k=ab.nextInt();
     int arr[]=new int[n];
     for(int i=0;i<n;i++)
     arr[i]=ab.nextInt();
     int sum=arr[0],start=0;
     for(int i=1;i<=n;i++)
     {
         while(sum>k && start<i)
         sum-=arr[start++];
         if(sum==k)
         {
             System.out.println(start+1+" "+(i));
             continue st;
         }
         if(i<n)
         sum+=arr[i];
     }
     System.out.println("-1");
 }
  }
}
