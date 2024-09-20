public class Teste05 {
	public int ff (int n){
		if (n == 1) return 1;
		if (n % 2 == 0) 
			return ff(n/2);
		return ff(n-1) + ff(n-2);
		}
}
