public class Avaliacao0202{
    public static int tabela(int lin, int col){
        int resposta;

        // aqui entra o seu código
        if(col > lin)
            return 0;
        if(col == 1)
            return 1;
        else
            resposta = tabela(lin-1, col-1) + tabela(lin-1, col);

        return resposta;
    }

    public static void main(String args[]){
        int x = tabela(5, 4);
        System.out.println(x); //4
        System.out.println(tabela(4, 5)); //0
        System.out.println(tabela(8, 3)); //21
    }
}