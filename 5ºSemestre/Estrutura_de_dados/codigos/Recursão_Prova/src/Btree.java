import java.util.*;

class Btree{
    Bnode raiz;

    // Funçoes usadas para a criptografia
    public Btree(){
        raiz = null;
    }
    
    public void Add(char caractere, int frequencia){
        if(raiz == null){
            raiz = new Bnode(caractere, frequencia);
        }
        else{
            Bnode aux = new Bnode('\0', raiz.frequencia + frequencia);
            if(raiz.frequencia < frequencia){
                aux.r = new Bnode(caractere, frequencia);
                aux.l = raiz;
            }
            else{
                aux.l = new Bnode(caractere, frequencia);
                aux.r = raiz;
            }
        raiz = aux;
        }
    }
    
    public void PrintPreOrder(Bnode node) {
        if(node != null){
            System.out.print(node.frequencia + " ");
            PrintPreOrder(node.l);
            PrintPreOrder(node.r);
        }
    }

    public String Criptografia(Bnode node, char caractere, String caminho) {
        if(node == null){
            return "";
        }
        if(node.caractere == caractere){
            return caminho;
        }
        String left = Criptografia(node.l, caractere, caminho + "0");
        if(left.isEmpty()){
            return Criptografia(node.r, caractere, caminho + "1");
        }
        return left;
    }
    
    public void PrintArvoreVisual(Bnode node, String prefixo, boolean isLeft) {
        if (node != null) {
            System.out.println(prefixo + (isLeft ? "├── " : "└── ") + node.frequencia + " (" + node.caractere + ")");
            PrintArvoreVisual(node.l, prefixo + (isLeft ? "│   " : "    "), true);
            PrintArvoreVisual(node.r, prefixo + (isLeft ? "│   " : "    "), false);
        }
    }
}