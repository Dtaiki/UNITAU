public class Potencia03 {
	public int potencia(int n, int p) {
		if(p == 0)
			return 1;
		else
			return n * potencia(n, p-1);
	}
}
