import java.util.*;
import java.io.*;
public class BinarySearch{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		// int[] a = new int[n];
		// for(int i=0;i<n;i++)
		// {
		// 	a[i]=sc.nextInt();
		// }
		// Arrays.sort(a);
		// int key = sc.nextInt();
		// System.out.println("Index of "+key+" = "+Arrays.binarySearch(a,key));
		List<Integer> a = new ArrayList<Integer>();
		for(int i=0;i<n;i++)
		{
			int t=sc.nextInt();
			a.add(t);
		}
		Collections.sort(a);
		int key = sc.nextInt();
		int index=Collections.binarySearch(a,key);
		System.out.println("Index Of "+key+" = "+index);
	}
}