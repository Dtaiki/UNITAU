import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
    	JogoDaForca j = new JogoDaForca();
    	char letra;
    	
		j.selecionaPalavra();
		for(int n=0; n<7; n++) {
        	System.out.printf("Tentativa %d/%d\n", n, 7);
    		letra = sc.nextLine().charAt(0);
        	j.chute(letra);
			j.verificaLetras();
        	j.chutes();
        	j.vencedor();
    	}
    }
}