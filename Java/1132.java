import java.util.Scanner;

public class Main{

  public static void main(String[] args) {
        
    int i, x, y, soma = 0;
        
    Scanner teclado = new Scanner(System.in);
        
    x = teclado.nextInt();
    y = teclado.nextInt();
        
    if(x < y){
      for(i = x; i <= y; i++){
	      if(i % 13 != 0){
          soma += i;
        }
      }
    }
     else{
      for(i = y; i <= x; i++){
		    if(i % 13 != 0){
          soma += i;
        }
      }
    }

    System.out.println(soma);
  } 
}