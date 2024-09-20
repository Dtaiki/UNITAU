public class Mod11 {
	public int mod(int n, int m) {
		if(n<m) {
			return n;
		}
		else {
			return mod(n-m, m);
		}
	}
}
