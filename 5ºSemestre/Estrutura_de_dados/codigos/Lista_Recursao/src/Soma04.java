public class Soma04 {
	public int somaRep(int a, int b) {
		while(b>0) {
			a++;
			b--;
		}
		return a;
	}
	public int somaRec(int a, int b) {
		if(b == 0)
			return a;
		else
			return somaRec(a+1, b-1);
	}
}
