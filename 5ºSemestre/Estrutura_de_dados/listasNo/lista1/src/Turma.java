public class Turma {
	Aluno[] alunos;
    int quantidade;
    
    public Turma(int capacidade) {
        alunos = new Aluno[capacidade];
        quantidade = 0;
    }
    
	public void adicionarAluno(Aluno aluno) {
        if (quantidade < alunos.length) {
            alunos[quantidade] = aluno;
            quantidade++;
        } else {
            System.out.println("Capacidade da turma atingida.");
        }
    }
	
	public void removerAluno(int matricula) {
        for (int i = 0; i < quantidade; i++) {
            if (alunos[i].matricula == matricula) {
                for (int j = i; j < quantidade - 1; j++) {
                    alunos[j] = alunos[j + 1];
                }
                alunos[quantidade - 1] = null;
                quantidade--;
                break;
            }
        }
    }
	
	public void imprimirSituacaoAlunos() {
        for (int i = 0; i < quantidade; i++) {
            System.out.println("Nome: " + alunos[i].nome + ", Situação: " + alunos[i].verificarAprovacao());
        }
    }
}
