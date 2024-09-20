public class Sum16 {
	public double sum(int n) {
		if(n == 1)
			return 1.0;
		else if(n%2==0)
			return -1.0 / n + sum(n-1);
		else
			return 1.0 / n + sum(n-1);
	}
}
