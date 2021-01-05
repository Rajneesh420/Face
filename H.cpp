String SandSequence(int a[])
{
	int sum=a[0];
	int n=a.length;
	for(int i=1;i<n;i++)
	{
		if(sum>a[i])
			return "False";
		sum+=a[i];
	}
	return "True";
}