public class Avaliacao0203 {
    public static void main(String args[]){
        ListaR l = new ListaR();
        l.add(9);
        l.add(3);
        l.add(2);
        l.add(3);
        l.add(1);
        l.add(3);
        l.add(6);
        l.add(3);
        l.add(3);

        System.out.println(l.repete(3,4)); //TRUE
        System.out.println(l.repete(5, 1)); //FALSE
        System.out.println(l.repete(7, 1)); //FALSE
    }
}
