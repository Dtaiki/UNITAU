public class Teste06 {
	public static int fusc(int n, int profund){
		int i;
		for (i = 0; i < profund; i++)
			System.out.print("...");
		System.out.println("fusc(" + n + ", " + profund + ")");
		if (n == 1) 
			return 1;
		if (n % 2 == 0) 
			return fusc(n/2, profund+1);
		return fusc((n-1)/2, profund+1) + fusc((n+1)/2, profund+1);
	}
}
