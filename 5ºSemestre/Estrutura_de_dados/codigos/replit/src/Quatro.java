import java.util.*;

public class Quatro {
	
	public Quatro(){
		Queue<Integer> fila = new LinkedList<>();
		Queue<Integer> fila1 = new LinkedList<>();
		Queue<Integer> fila2 = new LinkedList<>();
		int tam;
		
		for(int n=0; n<11; n++){
		  fila.add(n);
		}
		
		if((fila.size()/2) % 2 == 0)
			tam = fila.size()/2;
		else
			tam = fila.size()/2+1;
		
		for(int n=0; n<tam*2; n++) {
			if(fila.isEmpty())
				break;
			if(n<tam)
				fila1.add(fila.remove());
			else
				fila2.add(fila.remove());
		}
		while(!fila1.isEmpty() && !fila2.isEmpty()) {
			fila.add(fila1.remove());
			fila.add(fila2.remove());
		}
		
		System.out.println(fila);
	}
}
