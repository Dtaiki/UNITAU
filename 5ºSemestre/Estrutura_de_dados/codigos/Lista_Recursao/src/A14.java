
public class A14 {
	public int puzzle(int base, int limit)
	{ //base and limit are nonnegative numbers
			if ( base > limit ) return -1;
			else if ( base == limit ) return 1;
			else return base * puzzle(base + 1, limit);
	}
}
