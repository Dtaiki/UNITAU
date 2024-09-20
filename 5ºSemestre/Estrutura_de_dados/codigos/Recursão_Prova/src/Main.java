import java.util.*;

class Main {
    public static void main(String[] args) {
        // Cria a lista de caracteres e raiz da arvore
        Btree arvore = new Btree();
        Lista lista = new Lista();

        // Leitura do arquivo
        String palavra = LeArquivo();

        // Adiciona os caracteres na lista e ordena
        OrdenaLista(lista, palavra);

        // Criptografia
        String stringCriptografada = Criptografia(arvore, lista, palavra);
    }

    public static String LeArquivo(){
        // Le arquivo
        //String caminho = "C:\\Users\\ukita\\Downloads\\socorro2.0\\IntroductiontoDataStructuresandAlgorithm.txt";
        String caminho = "C:\\Users\\ukita\\Downloads\\socorro2.0\\WhyIsAI.txt";

        LeituraArquivo ler = new LeituraArquivo(caminho);
        String palavra = ler.lerArquivo();
        System.out.println("\nConteúdo do arquivo:\n" + palavra);
        
        return palavra;
    }

    public static void OrdenaLista(Lista lista, String palavra){
        for(char letra : palavra.toCharArray()){
            lista.Add(lista.raiz, letra);
        }
        System.out.println();
        lista.OrdenaCrescente(lista.raiz);
        lista.Printa(lista.raiz);
    }

    public static String Criptografia(Btree arvore, Lista lista, String palavra){
        // Percorre a lista e adiciona as letras na arvore
        lista.AdicionaNaArvore(arvore, lista.raiz);

        System.out.println("\nÁrvore Visual:");
        arvore.PrintArvoreVisual(arvore.raiz, "", false);

        // Imprime os valores da arvore em pre ordem
        System.out.println("\nPrint em pre ordem:");
        arvore.PrintPreOrder(arvore.raiz);

        // Fazer a criptografia da string a partir da arvore
        String stringCriptografada = "";
        for(char letra : palavra.toCharArray()){
            stringCriptografada += arvore.Criptografia(arvore.raiz, letra, "");
        }
        System.out.println("\n\nString Criptografada: " + stringCriptografada);

        return stringCriptografada;
    }
}


/*
    PASSOS
    
    ler o arquivo transformando em string

    passar os caracteres da string para a fila encadeada
    
    ordenar a fila encadeada

    ler a fila passando a frequencia e o caractere para a arvore

    ler a pavra, voltando a string criptografada do caractere de acordo com a arvore

    ter a string criptografada


    pegar a string criptografada e a arvore

    ir lendo os 0 e 1 ate chegar na folha e voltar o caractere

    ter a string descriptografada
*/