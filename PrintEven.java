import java.util.*;
import java.io.*;
class PrintEven
{
	static int PrintHelper(int[] a,int i)
	{
		if(i>=a.length) return 0;
		int result = PrintHelper(a,i+1);
		if(a[i]%2==0) result++;
		return result;
	}
	static void Print(int[] a)
	{
		System.out.println("Number of Even numbers = " + PrintHelper(a,0));
	}
	public static void main(String[] args) {
			Scanner sc = new Scanner(System.in);
			int n=sc.nextInt();
			int[] a=new int[n];
			for(int i=0;i<n;i++)
			{
				int t=sc.nextInt();
				a[i]=t;
			}
		Print(a);
	}
}