public class Avaliacao0201{
    public static int inverso(int N){
        int resposta;

        // aqui entra o seu código
        int aux=9;
        
	    if (N < 10)
	        return N;
	    else {
	    	while(aux < N)
	    		aux = aux*10;
		    resposta = inverso(N%10) * aux/9;
	    	resposta += inverso(N/10);
	    }


        return resposta;
    }

    public static void main(String args[]){
        int x = inverso(1234);
        System.out.println(x); //4321
        System.out.println(inverso(x)); //1234
    }
}