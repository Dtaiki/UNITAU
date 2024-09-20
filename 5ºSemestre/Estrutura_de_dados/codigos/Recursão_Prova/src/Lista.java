class Lista{
  Node raiz;

  public Lista(){
    raiz = null;
  }

  public void Add(Node nodeAtual, char letra){
    if(nodeAtual == null){
      raiz = new Node(letra);
    }
    else if(nodeAtual.caractere == letra){
      nodeAtual.frequencia++;
    }
    else if(nodeAtual.prox != null){
      Add(nodeAtual.prox, letra);
    }
    else{
      nodeAtual.prox = new Node(letra);
    }
  }

  public void OrdenaCrescente(Node nodeAtual){
    if (nodeAtual == null){
      return;
    }
    
    while(nodeAtual != null){
      Node proxNode = nodeAtual.prox;
      while(proxNode != null){
        if(nodeAtual.frequencia > proxNode.frequencia){
          int frequencia = nodeAtual.frequencia;
          char letra = nodeAtual.caractere;
          nodeAtual.frequencia = proxNode.frequencia;
          nodeAtual.caractere = proxNode.caractere;
          proxNode.frequencia = frequencia;
          proxNode.caractere = letra;
        }
        proxNode = proxNode.prox;
      }
      nodeAtual = nodeAtual.prox;
    }
  }
  
  public void Printa(Node nodeAtual){
    if(nodeAtual != null){
      System.out.println(nodeAtual.caractere + " " + nodeAtual.frequencia);
      Printa(nodeAtual.prox);
    }
  }

  public void AdicionaNaArvore(Btree arvore, Node nodeAtual){
    if(nodeAtual != null){
      arvore.Add(nodeAtual.caractere, nodeAtual.frequencia);
      AdicionaNaArvore(arvore, nodeAtual.prox);
    }
  }
}