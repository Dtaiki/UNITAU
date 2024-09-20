public class Banco{
  Conta contas[];
  int indice;

  public Banco(){
    contas = new Conta[10];
    indice = 0;
  }

  public void adiciona(Conta c){
    if(indice<contas.length){
      contas[indice] = c;
      indice++;
    }
  }

  public void depositar(int numero, double valor){
    for(int i=0; i<indice; i++){
      if(contas[i].numero == numero) {
        contas[i].saldo += valor;
        break;
      }
    }
  }

  public void sacar(int numero, double valor){
    for(int i=0; i<indice; i++){
      if(contas[i].numero == numero) {
        if(contas[i].saldo >= valor){
          contas[i].saldo -= valor;
          break;
        }
        else{
          System.out.println("Saldo insuficiente");
        }
        break;
      }
    }
  }

  public void transferir(int origem, int destino, double valor){
    for(int i=0; i<indice; i++){
      if(contas[i].numero == origem) {
        if(contas[i].saldo >= valor){
          contas[i].saldo -= valor;
          break;
        }
        else{
          System.out.println("Saldo insuficiente");
        }
        break;
      }
    }

    for(int i=0; i<indice; i++){
      if(contas[i].numero == destino) {
        contas[i].saldo += valor;
        break;
      }
    }
  }

  public void saldodocliente(int numero){
    for(int i=0; i<indice; i++){
      if(contas[i].numero == numero) {
        System.out.println(contas[i].saldo);
        break;
      }
    }
  }
}