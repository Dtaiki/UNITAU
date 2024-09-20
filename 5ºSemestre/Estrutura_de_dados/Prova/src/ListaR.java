
public class ListaR{
    private NodeR inicio;
    
    public ListaR(){
       inicio = null; 
    }
    
    public void add(int valor){
        if(inicio!=null){
            inicio.add(valor);
        }
        else{
            inicio = new NodeR(valor);
        }
        
    }
    
    public boolean repete(int N, int quantidade){
        if(inicio!=null){
            return inicio.repete(N, quantidade);
        }
        else{
            return false;
        }
    }
}
