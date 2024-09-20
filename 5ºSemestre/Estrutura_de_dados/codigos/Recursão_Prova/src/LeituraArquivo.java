import java.io.BufferedReader; // é usado para ler o texto de um FileReader
import java.io.FileReader; //le o caracteres de um arquivo  
import java.io.IOException; //Usado para erros de entrada e saida 

class LeituraArquivo {
    private String caminhoDoArquivo;

    public LeituraArquivo(String caminhoDoArquivo) {
        this.caminhoDoArquivo = caminhoDoArquivo;
    }

    public String lerArquivo() {
        StringBuilder conteudo = new StringBuilder();

        // O comando try é usado para iniciar um bloco que possa gerar uma exceção, 
        // permitindo que caso algo de errado aconteça o comando catch possa apresentar uma mensagem de erro
        try (BufferedReader leitor = new BufferedReader(new FileReader(caminhoDoArquivo))) 
        {
            String linha;
            while ((linha = leitor.readLine()) != null) 
            {
                conteudo.append(linha).append("\n");
            }
        } catch (IOException e) 
        {
            System.out.println("Erro ao ler o arquivo: " + e.getMessage());
        }

        return conteudo.toString();
    }
}