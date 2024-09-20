public class main {
	public static void main(String[] args) {
		Fila f = new Fila();
		
		for(int n=0; n<10; n++) {
			f.add(n);
		}
		System.out.printf("Tamanho: %d\n", f.tam());
		System.out.printf("Soma: %d\n", f.somaNode());
		System.out.printf("Maior: %d\n", f.maior());
		System.out.printf("Menor: %d\n", f.menor());
	}
}
