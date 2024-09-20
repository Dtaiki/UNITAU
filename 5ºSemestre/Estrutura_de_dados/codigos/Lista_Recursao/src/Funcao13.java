public class Funcao13 {
	public int verifica(int x) {
		if(x<3)
			return x;
		else
			return verifica(x-3);
	}
	
	public int fatorial(int x) {
		if(x == 1)
			return 1;
		else
			return fatorial(x-1) * x;
	}
	
	public int funcao(int x) {
		if(verifica(x) == 0)
			return x*x;
		else if(verifica(x) == 1)
			return x+3;
		else
			return fatorial(x);
	}
}
