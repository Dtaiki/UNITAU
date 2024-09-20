import java.util.Map;

class Bnode{
  int frequencia;
  char caractere;
  Bnode l, r;
  
  public Bnode(char caractere, int frequencia){
    this.frequencia = frequencia;
    this.caractere = caractere;
    l = r = null;
  }
}