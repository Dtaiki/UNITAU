
public class NodeR
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private int x;
    private NodeR prox;

    /**
     * Construtor para objetos da classe NodeR
     */
    public NodeR(int valor)
    {
        // inicializa variáveis de instância
        x = valor;
        prox = null;
    }
    
   public void add(int valor){
       if(prox!=null){
           prox.add(valor);
       }
       else{
           prox = new NodeR(valor);
       }
   }

   public boolean repete(int N, int quantidade){
    if (quantidade < 0){
    	return true;
	}
	if (prox == null){
	    System.out.println(x);
	    if(x == N && --quantidade < 0)
	    return true;
	    else
	    return false;
	   
	}
	if(x == N){
	    System.out.println(x);
	    return prox.repete(N, --quantidade);
	}
	else{
	    System.out.println(x);
	    return prox.repete(N, quantidade);
	}
	
	
	}
}
