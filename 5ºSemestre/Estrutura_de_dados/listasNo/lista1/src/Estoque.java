public class Estoque {
	Produto produtos[];
	int quantidade;
	
	public Estoque(int n) {
		produtos = new Produto[n];
		quantidade = 0;
	}
	
	public void adicionar(Produto p) {
		if(quantidade < produtos.length) {
			produtos[quantidade] = p;
			quantidade ++;
		}
		else
			System.out.println("Estoque cheio.");
	}
	
	public void remove(int codigo) {
		for(int n=0; n<quantidade; n++) {
			if(produtos[n].codigo == codigo) {
				for(int j=n; j<quantidade-1; j++) {
					produtos[j] = produtos[j+1];
				}
				produtos[quantidade-1] = null;
				quantidade--;
				break;
			}
		}
	}
	
	public void atualiza(int codigo, int quantidade) {
		for(int n=0; n<quantidade; n++) {
			if(produtos[n].codigo == codigo) {
				produtos[n].quantidade = quantidade;
				break;
			}
		}
	}
	
	public void busca(int codigo) {
		for(int n=0; n<quantidade; n++) {
			if(produtos[n].codigo == codigo) {
				System.out.printf("%d %s %d %.2f\n", produtos[n].codigo, produtos[n].nome, produtos[n].quantidade, produtos[n].preco);
				break;
			}
		}
	}
	
	public void imprime() {
		for(int n=0; n<quantidade; n++) {
			System.out.printf("%d %s %d %.2f\n", produtos[n].codigo, produtos[n].nome, produtos[n].quantidade, produtos[n].preco);
		}
	}
}
