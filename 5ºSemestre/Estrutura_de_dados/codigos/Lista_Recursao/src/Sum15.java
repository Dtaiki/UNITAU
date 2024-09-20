public class Sum15 {
	public double sum(int n) // n>=1
	{
		if (n==1)
			return 1.0;
		return 1.0 / n + sum(n-1);
	}
}
