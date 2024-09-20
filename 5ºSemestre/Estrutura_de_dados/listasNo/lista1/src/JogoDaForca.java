import java.util.Random;

public class JogoDaForca {
	String palavra;
	char[] letrasChutadas;
	int acertos, erros, acertosAux = 0, ganhos = 0;

	public JogoDaForca() {
        this.letrasChutadas = new char[26];
        acertos = 0;
        erros = 0;
	}
	
	public void selecionaPalavra() {
		String[] animais = {"Cachorro", "Gato", "Coelho", "Passaro", "Peixe"};
		Random random = new Random();
        int indiceAleatorio = random.nextInt(animais.length);
        String animalSelecionado = animais[indiceAleatorio];
        this.palavra = animalSelecionado;
        System.out.println(palavra);
	}
	
	public void chute(char letra) {
		for(int n=0; n<26; n++) {
			if(letrasChutadas[n] == 0) {
				letrasChutadas[n] = letra;
				break;
			}
		}
	}
	
	public void chutes() {
		System.out.print("chutes: ");
		for(int n=0; n<26; n++) {
			if(letrasChutadas[n] != 0)
				System.out.printf("%c ", letrasChutadas[n]);
			else {
				System.out.println("");
				break;
			}
		}
		System.out.println("");
	}
	
	public void verificaLetras() {
		acertos = 0;
		for(int n=0; n<palavra.length(); n++) {
			for(int j=0; j<26; j++) {
				if(Character.toLowerCase(palavra.charAt(n)) == letrasChutadas[j]) {
					System.out.print(palavra.charAt(n));
					acertos++;
					break;
				}
			}
			if(acertos == acertosAux) {
				System.out.print("_");
			}
			else
				acertosAux = acertos;
		}

		erros = 0;
		for (int j = 0; j < letrasChutadas.length; j++) {
		    if (letrasChutadas[j] == 0) {
		        break;
		    }
		    boolean letraEncontrada = false;
		    for (int n = 0; n < palavra.length(); n++) {
		        if (Character.toLowerCase(letrasChutadas[j]) == Character.toLowerCase(palavra.charAt(n))) {
		            letraEncontrada = true;
		            break;
		        }
		    }
		    if (!letraEncontrada) {
		        erros++;
		    }
		}
		
		System.out.println();
		System.out.printf("%d/%d acertos, %d/%d erros\n", acertos, palavra.length(), erros, 7);
	}
	
	public boolean vencedor() {
		if(erros == 7) {
			System.out.print("Voce perdeu.");
			return false;
		}
		if(acertos == palavra.length()) {
			System.out.print("Voce venceu.");
			return true;
		}
		return false;
	}
}
