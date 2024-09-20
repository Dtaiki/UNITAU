public class Fila {
	private Node inicio, fim;
	
	public Fila() {
		inicio = fim = null;
	}
	
	public void add(int x) {
		if(inicio == null) {
			inicio = new Node(x);
			fim = inicio;
		}
		else {
			fim.setProx(new Node(x));
			fim = fim.getProx();
		}
	}
	
	public void remove() {
		if(inicio != null)
			inicio = inicio.getProx();
		else
			System.out.println("Erro: fila vazia.");
	}
	
	public void view() {
		Node atual = inicio;
		while(atual != null) {
			System.out.println(atual.getX());
			atual = atual.getProx();
		}
	}
	
	public int tam() {
		Node atual = inicio;
		int tamanho=0;
		if(inicio != null) {
			while(atual != null) {
				tamanho++;
				atual = atual.getProx();
			}
		}
		return tamanho;
	}
	
	public int somaNode() {
		Node atual = inicio;
		int soma=0;
		if(inicio != null) {
			while(atual != null) {
				soma += atual.getX();
				atual = atual.getProx();
			}
		}
		return soma;
	}
	
	public int maior() {
		Node atual = inicio;
		int max = -2147483648;
		if(inicio != null) {
			while(atual != null) {
				if(atual.getX() > max) {
					max = atual.getX();
				}
				atual = atual.getProx();
			}
		}
		return max;
	}
	
	public int menor() {
		Node atual = inicio;
		int men = 2147483647;
		if(inicio != null) {
			while(atual != null) {
				if(atual.getX() < men) {
					men = atual.getX();
				}
				atual = atual.getProx();
			}
		}
		return men;
	}
}
