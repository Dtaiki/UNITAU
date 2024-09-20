public class Misterio1 {
	public int misterio(int a, int b){
		if (b == 1) return a;
		else return a + misterio(a, b-1);
		}
}