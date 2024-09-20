public class A17 {
	public int F(int N){
		if (N < 4) return 3*N;
		else return 2 * F(N - 4) + 5;
		}
}
