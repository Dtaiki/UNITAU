public class Teste07 {
	public int h(int m, int n) {
		if(m==1)
			return n+1;
		else if(n==1)
			return m+1;
		else
			return h(m-1, n) + h(m, n-1);
	}
}
