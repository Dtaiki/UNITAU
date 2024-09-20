public class Nx09 {
	public int nx(int n, int x) {
		if(x == 1)
			return n;
		else
			return n + nx(n, x-1);
	}
}
