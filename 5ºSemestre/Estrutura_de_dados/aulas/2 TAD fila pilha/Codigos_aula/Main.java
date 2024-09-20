import java.util.*;

public class Main {
  public static void main(String[] args) {
     Queue<Integer> q = new LinkedList<>();

      q.add(1);
      q.add(2);
      q.add(3);
      q.add(4);
      q.add(5);

    System.out.println(q.peek());
    System.out.println(q);
    System.out.println(q.remove());
    System.out.println(q);
    System.out.println(q.size());

    while(q.size() > 0){
      System.out.println(q.poll());
    }

    // agora, usando pilhas....
    Stack<String> p = new Stack<>();

    p.push("A");
    p.push("B");
    p.push("C");
    p.push("D");

    System.out.println(p.peek());
    System.out.println(p);
    System.out.println(p.pop());
    System.out.println(p.pop());
    System.out.println(p);
    
    
  }
}