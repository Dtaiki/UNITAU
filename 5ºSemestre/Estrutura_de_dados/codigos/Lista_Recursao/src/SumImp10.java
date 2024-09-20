public class SumImp10 {
	public int sumImp(int x) {
		if(x==1)
			return x;
		else if((x&1) == 0)
			return sumImp(x-1);
		else
			return x + sumImp(x-2);
	}
}
