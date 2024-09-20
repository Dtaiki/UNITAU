public class Mdc08 {
	public int mdc(int x, int y) {
		if(x == y)
			return x;
		else {
			if(x > y)
				return mdc(x-y, y);
			else
				return mdc(y, x);
		}
	}
}
